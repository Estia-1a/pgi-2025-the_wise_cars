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
    printf("dimension : %d, %d \n", width, height);
    free_image_data(data);
}

void first_pixel(char *source_path){
    int width, height, channels;
    unsigned char *data;
    read_image_data(source_path, &data, &width, &height, &channels);
    printf("first_pixel : %d,%d,%d \n",data[0],data[1],data[2]);
    free_image_data(data);
}

void tenth_pixel(char *source_path){
    int width, height, channels;
    unsigned char *data;
    read_image_data(source_path, &data, &width, &height, &channels);
    printf("tenth_pixel : %d,%d,%d \n",data[27],data[28],data[29]);
    free_image_data(data);
}

void second_line(char *source_path){
  int width, height, channels;
  unsigned char *data;

  read_image_data(source_path, &data, &width, &height, &channels);
  int ligne = 3*width+3;
  printf("second_line : %d,%d,%d \n",data[ligne],data[ligne+1],data[ligne+2]);
  free_image_data(data);
}

void print_pixel(char *source_path, int x, int y){
  int width, height, channels;
  unsigned char *data;
  read_image_data(source_path, &data, &width, &height, &channels);
  pixelRGB *pixel=get_pixel(data, width, height, channels, x, y);
  printf("print_pixel (x,y) : (%d, %d): %d, %d, %d\n", x, y, pixel->R, pixel->G, pixel->B);
  free_image_data(data);
}

void color_red(char *source_path){
  int width,height,channels;
  unsigned char *data;
  read_image_data(source_path,&data,&width,&height,&channels);
  int i=0;
  for(i=0;i<width*height*channels;i+=channels){
    data[i+1]=0; // met les nuances de bleus et vert à 0 pour ne retenir que les nuances de rouges
    data[i+2]=0;
  }
  write_image_data("image_out.bmp",data,width,height);
  free_image_data(data);
}

//Pour les autres fonctions "color, il suffit juste de jouer avec les data[i],data[i+1],data[i+2] pour changer les nuances de couleurs
/*
void max_pixel (char *filename){
  unsigned char *data = NULL;
  int width;
  int height;
  int channels;
  if (read_image_data(filename, &data, &width, &height, &channels) == 0){
    
    printf("erreur");
  }
  else {
    read_image_data(filename, &data, &width, &height, &channels);
    int max_R = -1;
    int max_G = -1;
    int max_B = -1;
    int max_X;
    int max_Y;
    
    for (int y = 0; y < height; y++){
      for (int x = 0; x < width; x++){

        pixelRGB *pixel = get_pixel(data, width, height, channels, x, y);
        
        if ((pixel->R + pixel->G + pixel->B) > (max_R + max_G + max_B)) {
          max_R = pixel->R;
          max_G = pixel->G;
          max_B = pixel->B;
          
          max_X = x;
          max_Y = y;

        } 
      }
    }
    printf("max_pixel : (%d, %d): %d, %d, %d\n", max_X, max_Y, max_R, max_G, max_B);

    free_image_data(data);
  }

}
*/

/*
void min_pixel (char *filename){;
  unsigned char *data = NULL;
  int width;
  int height;
  int channels;
  if (read_image_data(filename, &data, &width, &height, &channels) == 0){
    printf("erreur");
  }
  else {
    read_image_data(filename, &data, &width, &height, &channels);
    int min_R = 256;
    int min_G = 256;
    int min_B = 256;
    int min_X;
    int min_Y;

    for (int y = 0; y < height; y++){
      for (int x = 0; x < width; x++){
        pixelRGB *pixel = get_pixel(data, width, height, channels, x, y);

        if ((pixel->R + pixel->G + pixel->B) < (min_R + min_G + min_B)){
          min_R = pixel->R;
          min_G = pixel->G;
          min_B = pixel->B;

          min_X = x;
          min_Y = y;
        }
      }
    }
    printf("min_pixel : (%d, %d): %d, %d, %d\n", min_X, min_Y, min_R, min_B, min_G);
    free_image_data(data);
  }
}
*/