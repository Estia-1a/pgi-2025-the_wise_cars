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
 if(read_image_data(source_path,&data,&width,&height,&channels)!=0) {}
}

