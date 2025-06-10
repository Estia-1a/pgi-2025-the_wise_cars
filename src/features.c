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
  int nbChannels = 0;

  read_image_data(source_path, &data, &width, &height, &nbChannels);

  int R = data[width * 3];
  int G = data[width * 3 + 1];
  int B = data[width * 3 + 2];

  printf("second_line: %d, %d, %d\n", R, G, B);
}

void max_pixel (char* source_path) {

}

void min_pixel (char* source_path) {

}

void max_component (char* source_path){

}

void min_component (char*source_path){

}

void stat_report() {

}

void color_red(char*source_path){

}

void color_green(char*source_path){

}

void color_blue(char*source_path){

}

void color_grey(char*source_path){

}
void invert(char*source_path){

}

void color_gray_luminance(char*source_path){

}

void color_desaturate(char*source_path){

}
