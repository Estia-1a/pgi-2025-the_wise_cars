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
void helloWorld(){
  printf("Hello World!\n");
}
void dimension (char *source_path){
    int width, height, channels;

    unsigned char *data; 
    read_image_data(source_path, &data, &width, &height, &channels);
    printf("dimensions de l'image : %d, %d \n", width, height);
}

void first_pixel(char *source_path){
    int width, height, channels;
    unsigned char *data;
    read_image_data(source_path, &data, &width, &height, &channels);
    printf("RGB du premier pixel : %d,%d,%d \n",data[0],data[1],data[2]);
}

void tenth_pixel(char *source_path){
    int width, height, channels;
    unsigned char *data;
    read_image_data(source_path, &data, &width, &height, &channels);
    printf("RGB du 10ème pixel : %d,%d,%d \n",data[27],data[28],data[29]);
}