#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */
int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *nbChannels){

}
int write_image_data(const char *filename, unsigned char *data, int width, int height){
    
}
/*
int read_image_data(const char *source_path, unsigned char **data, int *width, int *height, int *channel_count);
*/
const char *source_path = "images/input/image.jpeg"; 
void dimension (char *source_path){
    
    unsigned char *data = NULL;
    int width=0;
    int height=0;
    
    int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);

    printf("la dimension est : %d, %d\n",width, height);
    free_image_data(data);
}

void helloWorld() {
    printf("Hello World !");
}

typedef struct _pixelRGB {
  unsigned char R ;
  unsigned char G ;
  unsigned char B ;
} pixelRGB ;


void first_pixel (){
   
    unsigned char*data;
    int width, height, channels;

    if(read_image_data(source_path,&data,&width,&height,&channels) !=0) {
      return;
    }

    printf("first_pixel: %d,%d,%d\n",data[0],data[1],data[2]);
    free(data);
}


void print_pixel(char*filename,int x, int y) {
 unsigned char*data;
 int width,height, channels;
 if(read_image_data(source_path,&data,&width,&height,&channels)!=0) {
  return;
 }
pixelRGB*p= get_pixel(data,width,height,channels,x,y);

if(p !=NULL){
  printf("print_pixel (%d,%d):%d,%d,%d\n",x,y,p-> R,p-> G,p-> B);

}
free(data);
}
void test(){
    printf("test test");
}

void tenth_pixel(char *source_path){
    unsigned char*data=NULL;
    int *width = 0;
    int *height = 0; 
    read_image_data(source_path,&data,&width,&height, 3);
    int R = data[30];
    int G = data[31];
    int B = data[32];

    printf(R,G,B);
}
void second_line(char *source_path) {
  unsigned char *data = NULL;
  int width = 0;
  int height = 0;
  int channels = 0;

  read_image_data(source_path, &data, &width, &height, &channels);

  int R = data[width * 3];
  int G = data[width * 3 + 1];
  int B = data[width * 3 + 2];

  printf("second_line: %d, %d, %d\n", R, G, B);
}

void max_pixel (char* source_path) { /*Nathan*/
  unsigned char *data = NULL;
  
  int width = 0;
  int height = 0;
  int channels = 0;
  int max_sum = -1;
  int max_x = 0;
  int max_y = 0; 

  pixelRGB * max_pixel = NULL;

  for (int y=0; y < height; y++){
    for (int x=0; x < width; x++){
      pixelRGB * p = get_pixel(data, width, height, channels, x, y);
      int sum = p->R + p->G + p->B;

      if (sum > max_sum){
        max_sum = sum;
        max_x = x;
        max_y = y;
        max_pixel = p;
      }
    }
  }
  if (max_pixel != NULL){
    printf("max_pixel: (%d, %d): %d, %d, %d\n", max_x, max_y, max_pixel ->R, max_pixel ->G, max_pixel ->B);
  }
}

void min_pixel (char* source_path) { /*Nathan*/

}

void max_component (char* source_path) { /*Nathan*/

}

void min_component (char*source_path) { /*Nathan*/

}

void stat_report(char*filename) /* Loris*/ {
  unsigned char*data;
  int width,height,channels;
  int size;
  int i;

  if(read_image_data(filename,&data,&width,&height,&channels) !=0){
    return;
  }
  size=width*height*channels;
  int max_pixel=0;
  int min_pixel =255;
  int max_r=0, max_g=0, max_b=0;
  int min_r=255, min_g=255, min_b=255;

  for(i=0; i< size; i+=channels){
    int r= data[i];
    int g = data[i + 1];
    int b= data[i+2];

    int pixel_value=(r+g+b)/3;

    if(pixel_value > max_pixel) max_pixel = pixel_value;
    if(pixel_value < min_pixel)min_pixel = pixel_value;

    if(r> max_r) max_r =r;
    if(g> max_g) max_g =g;
    if(b> max_b) max_b =b;

    if (r< min_r ) min_r =r;
    if (g < min_g) min_g =g;
    if (b < min_b) min_b= b;


  }
   FILE*f = fopen("start_report.txt", "w");

   if (f==NULL) {
    free(data);
    return;

   }
   fprintf(f,"max_pixel: %d\n\n", max_pixel);
   fprintf(f,"min_pixel: %d\n\n", min_pixel);
   fprintf(f,"max_component R: %d\n\n", max_r);
   fprintf(f,"max_component G: %d\n\n", max_g);
   fprintf(f, "max_component B: %d\n\n",max_b);
   fprintf(f,"min_component R: %d\n\n", min_r);
   fprintf(f,"min_component G: %d\n\n",min_g);
   fprintf(f,"min_component B: %d\n\n", min_b);

   fclose(f);
   free(data);


}

void color_red(char*filename) /*Loris*/ {
  unsigned char *data;
  int width, height, channels;

  if(read_image_data(filename,&data,&width,&height,&channels) !=0) {
    return;
  }

  int size = width* height * channels;

  for(int i=0; i< size; i+= channels) {
    data[i+1]=0;
    data[i+2]=0;


  }
 write_image_data("image_out.bmp", data, width, height);
 free(data);

}

void color_green(char*filename)/*Loris*/ {
  unsigned char*data;
  int width,height,channels;

  if(read_image_data(filename,&data,&width,&height,&channels) !=0){
    return;
  }

  int size= width*height*channels;

  for (int i=0; i< size;i+= channels){
    data[i]=0;
    data[i+2]=0;

  }
  write_image_data("image_out.bmp", data, width, height);
  free(data);

}

void color_blue(char*filename)/*Loris*/ {
  unsigned char*data;
  int width, height, channels;
  if(read_image_data(filename, &data,&width,&height,&channels)!=0){
    return;
  }
  int size= width*height*channels;

  for (int i=0; i< size; i+=channels){
    data[i]=0;
    data[i+1]=0;

  }
  write_image_data("image_out.bmp", data, width,height);
  free(data);


}

void color_grey(char*source_path) {
  unsigned char *data = NULL;
  int i;
  for (i=0;i<width*height;i++) {
    unsigned char R = data[3*i];
    unsigned char G = data[3*i+1];
    unsigned char B = data[3*i+2];
  }
  int write_image_data(const char *filename, unsigned char *data, int width, int height);
  //unsigned char value = 0.21 * getPixel(x, y)->R + 0.72 * getPixel(x, y)->G + 0.07 * getPixel(x, y)->B
  
}
void invert(char*source_path) {

}

void color_gray_luminance(char*source_path) {

}

void color_desaturate(char*source_path) {

}
