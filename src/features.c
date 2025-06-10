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

void helloWorld() {
    printf("Hello World ");
    
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
