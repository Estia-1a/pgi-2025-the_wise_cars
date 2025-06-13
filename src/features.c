#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//test commentaire Evrard
#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

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
}

void helloWorld() {
    printf("Hello World !");
}

void first_pixel (char*source_path){
   
    unsigned char*data;
    int width, height, channels;

    if(read_image_data(source_path,&data,&width,&height,&channels) !=0) {
      return;
    }

    printf("first_pixel: %d,%d,%d\n",data[0],data[1],data[2]);
}

void print_pixel(char*source_path,int x, int y) {
 unsigned char*data;
 int width,height, nbChannels;
 if(read_image_data(source_path,&data,&width,&height,&nbChannels)!=0) {
  return;
 }
pixelRGB*p= get_pixel(data,width,height,nbChannels,x,y);

if(p !=NULL){
  printf("print_pixel (%d,%d):%d,%d,%d\n",x,y,p-> R,p-> G,p-> B);

 }

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
  int nbChannels = 0;

  read_image_data(source_path, &data, &width, &height, &nbChannels);

  int R = data[width * 3];
  int G = data[width * 3 + 1];
  int B = data[width * 3 + 2];

  printf("second_line: %d, %d, %d\n", R, G, B);
}

void max_pixel (char* source_path) { /*Nathan*/
  unsigned char *data = NULL;
  
  int width = 0;
  int height = 0;
  int nbChannels = 0;
  int max_sum = -1;
  int max_x = 0;
  int max_y = 0; 

  pixelRGB * max_pixel = NULL;

  for (int y=0; y < height; y++){
    for (int x=0; x < width; x++){
      pixelRGB * p = get_pixel(data, width, height, nbChannels, x, y);
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
  unsigned char *data = NULL;
  int width = 0;
  int height = 0;
  int nbChannels = 0;
  int min_sum = 1000; 
  int min_x = 0;
  int min_y = 0;
  pixelRGB * min_pixel = NULL;
  for (int y=0; y < height; y++){
    for (int x=0; x < width; x++){
      pixelRGB * p = get_pixel(data, width, height, nbChannels, x, y);
      if (p== NULL){
        continue; 
        }
      int sum = p->R + p->G + p->B;
      if (sum < min_sum){
        min_sum = sum;
        min_x = x;
        min_y = y;
        min_pixel = p;
      }
    }
  }
  if (min_pixel != NULL){
    printf("min_pixel: (%d, %d): %d, %d, %d\n", min_x, min_y, min_pixel->R, min_pixel->G, min_pixel->B);
  }
}

void max_component (char* source_path, char component) { /*Nathan*/
  unsigned char *data = NULL;
  int width = 0;
  int height = 0;
  int nbChannels = 0;
  int max_value = -1;
  int max_x = -1;
  int max_y = -1;

  for (int y = 0; y < height; y++){
    for (int x = 0; x < width; x++){
      pixelRGB * p = get_pixel(data, width, height, nbChannels, x, y);
      if (p == NULL) {
        continue; 
      }
      int value = 0;
      if (component == 'R'){
        value = p->R;
      }
      else if (component == 'G'){
        value = p->G;
      }
      else if (component == 'B'){
        value = p->B;
      }
      if (value >max_value){
        max_value = value;
        max_x = x;
        max_y = y;
      }
          
    }
  }
  if (max_value != 1){
    printf("max_component %c (%d, %d): %d\n", component, max_x, max_y, max_value);
  }
  }


void min_component (char*source_path, char component) { /*Nathan*/
  unsigned char *data = NULL;
  int width = 0;
  int height = 0;
  int nbChannels = 0;
  int min_value = 1000;
  int min_x = -1;
  int min_y = -1;
  for (int y = 0; y < height; y++){
    for (int x = 0; x < width; x++){
      pixelRGB * p = get_pixel(data, width, height, nbChannels, x, y);
      if (p == NULL){
        continue;
      }
      int value = 0;
      if (component == 'R'){
        value = p->R;
      }
      else if (component == 'G'){
        value = p->G;
      }
      else if (component == 'B'){
        value = p->B;
      }
      if (value < min_value){
        min_value = value;
        min_x = x;
        min_y = y;
      }
      
      
    }
  }

}

void stat_report(char*source_path) /* Loris*/ {
  unsigned char*data;
  int width,height,nbChannels;
  int size;
  int i;

  if(read_image_data(source_path,&data,&width,&height,&nbChannels) !=0){
    return;
  }
  size=width*height*nbChannels;
  int max_pixel=0;
  int min_pixel =255;
  int max_r=0, max_g=0, max_b=0;
  int min_r=255, min_g=255, min_b=255;

  for(i=0; i< size; i+=nbChannels){
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


}

void color_red(char*source_path) /*Loris*/ {
  unsigned char *data;
  int width, height, nbChannels;

  if(read_image_data(source_path,&data,&width,&height,&nbChannels) !=0) {
    return;
  }

  int size = width* height * nbChannels;

  for(int i=0; i< size; i+= nbChannels) {
    data[i+1]=0;
    data[i+2]=0;


  }
 write_image_data("image.jpeg", data, width, height);

}

void color_green(char*source_path)/*Loris*/ {
  unsigned char*data;
  int width,height,nbChannels;

  if(read_image_data(source_path,&data,&width,&height,&nbChannels) !=0){
    return;
  }

  int size= width*height*nbChannels;

  for (int i=0; i< size;i+= nbChannels){
    data[i]=0;
    data[i+2]=0;

  }
  write_image_data("image.jpeg", data, width, height);

}

void color_blue(char*source_path)/*Loris*/ {
  unsigned char*data;
  int width, height, nbChannels;
  if(read_image_data(source_path, &data,&width,&height,&nbChannels)!=0){
    return;
  }
  int size= width*height*nbChannels;

  for (int i=0; i< size; i+=nbChannels){
    data[i]=0;
    data[i+1]=0;

  }
  write_image_data("image.jpeg", data, width,height);


}

void color_grey(char*source_path) {
  unsigned char*data;
  int width,height,nbChannels;
  if(read_image_data(source_path,&data,&width,&height,&nbChannels)!=0){
    return;
  }
  int size= width*height*nbChannels;
  for (int i=0;i< size; i+=nbChannels){
    data[i]=0;
    data[i+1]=0;
  }
  write_image_data("image.jpeg",data,width,height);
}

void invert(char*source_path) {
  unsigned char*data;
  int width,height,nbChannels;

  if(read_image_data(source_path,&data,&width,&height,&nbChannels) !=0){
    return;
  }

  int size=width*height*nbChannels;

  for(int i=0; i< size; i++){
    data[i]=255-data[i];
  }
  write_image_data("image.jpeg",data,width,height);
}

void color_gray_luminance(char*source_path) {
  unsigned char *data = NULL;
  int i;
  int width=0;
  int height =0;
  int size =width*height;
  unsigned char Rold,Gold,Bold;
  unsigned char R,G,B;
  for (i=0;i<size;i++){
    Rold = data[3*i];
    Gold = data[3*i+1];
    Bold = data[3*i+2];
  }
  int write_image_data(const char *source_path, unsigned char *data, int width, int height);

  R = 0.21 * Rold;
  G = 0.72 * Gold;
  B = 0.07 * Bold;
}

void color_desaturate(char*source_path) {
  unsigned char *data = NULL;
  int i;
  int width=0;
  int height =0;
  int size =width*height;
  unsigned char Rmin,Gmin,Bmin;
  unsigned char Rmax,Gmax,Bmax;
  unsigned char R,G,B;
  for (i=0;i<size;i++){
    Rmin = 255-data[3*i];
    Gmin = 255-data[3*i+1];
    Bmin = 255-data[3*i+2];
    Rmax=data[3*i];
    Bmax=data[3*i+1];
    Bmax=data[3*i+2];
    /* Formule :
    new_val = (min(R, G, B) + max(R, G, B)) / 2;
    */
    R= (Rmin + Rmax)/2;
    G=(Gmin + Gmax)/2;
    B=(Gmin + Gmax)/2;
  }
  int write_image_data(const char *source_path, unsigned char *data, int width, int height);
}

int main(int argc, char **argv) {
  /*To use debug mode: 
   - add --debug: freud.exe --debug -f images/input/image.jpeg
   or 
   - Simply run your compiled project with start button on the blue menu bar at the bottom of the VS Code window.
   */

  /*DO NOT EDIT THIS PART*/
  /*test nathan num 2 */

  Config configuration ;
  parse_arguments( argc, argv, &configuration ) ;
  check_debug_mode(configuration);
  check_file();
  /* END */

  /* Use "if ( strncmp( command, <commandname>, 9 ) == 0 )" to check if your <commandname> is called by program.*/
  /* Example with helloworld command
   * If helloworld is a called command: freud.exe -f images/input/image.jpeg -c helloworld 
   */
  if ( strncmp( configuration.command, "helloworld", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    helloWorld();
  }
  /*
   * TO COMPLETE
   */
  
  return 0;
}
