#ifndef FEATURES_H
#define FEATURES_H


void helloWorld();
void dimension (char *source_path);
void first_pixel(char *source_path);
void tenth_pixel(char *source_path);
void second_line(char *source_path);
void print_pixel(char *source_path, int x, int y);
void color_red(char *source_path);
void color_green(char *source_path);
void color_blue(char *source_path);
void color_invert(char *source_path);

void color_gray(char *filename);
void color_gray_luminance(char *filename);
void rotate_cw(char *filename);
void rotate_acw(char *filename);
void max_pixel(char *filename);
void min_pixel(char *filename);

void color_desaturate(char *source_path);
void max_component (char *source_path, char component);
void min_component (char *source_path, char component);

#endif
