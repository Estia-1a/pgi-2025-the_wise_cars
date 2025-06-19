#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//test commentaire Evrard
#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

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
  if ( strncmp( configuration.command, "helloWorld", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    helloWorld();
  }
  if ( strncmp( configuration.command, "dimension", 11 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    dimension(configuration.filenames[0]);
  }
  if ( strncmp( configuration.command, "first_pixel", 12 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    first_pixel(configuration.filenames[0]);
  }
  if ( strncmp( configuration.command, "tenth_pixel", 13 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    tenth_pixel(configuration.filenames[0]);
  }
    if ( strncmp( configuration.command, "second_line", 14 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    second_line(configuration.filenames[0]);
  }
  if ( strncmp( configuration.command, "print_pixel", 15 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    print_pixel(configuration.filenames[0],atoi(configuration.arguments[1]),atoi(configuration.arguments[2]));
  }
  if ( strncmp( configuration.command, "color_red", 16 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_red(configuration.filenames[0]);
  }
   if ( strncmp( configuration.command, "color_green", 17 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_green(configuration.filenames[0]);
  }
   if ( strncmp( configuration.command, "color_blue", 18 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_blue(configuration.filenames[0]);
  }
    if ( strncmp( configuration.command, "color_invert", 18 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    color_invert(configuration.filenames[0]);
  }
   else if ( strncmp( configuration.command, "color_gray", 10 ) == 0 ) {
    
      color_gray(configuration.filenames[0]);
    
  }
   else if ( strncmp( configuration.command, "color_gray_luminance", 20 ) == 0 ) {
    
      color_gray_luminance(configuration.filenames[0]);
    
  }
   else if ( strncmp( configuration.command, "rotate_acw", 10 ) == 0 ) {
    
      rotate_acw(configuration.filenames[0]);
    
  }
    else if ( strncmp( configuration.command, "rotate_acw", 10 ) == 0 ) {
    
      rotate_acw(configuration.filenames[0]);
    
  }


  /*
   * TO COMPLETE
   */
  
  return 0;
}
