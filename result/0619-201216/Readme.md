# Daily Evaluation 19/06 - 20:12:16
You can find below how you did for each feature. 
 You should merge the pull request to keep the eval and automatically close and open the issues you have finished!
# Milestone  Tutorial
Score : 18/23 :  78%
## Detail by Feature
| Feature     | Score       | Missed tests                                                                                                           | Stdout                 |
| :---------- | :---------- | :--------------------------------------------------------------------------------------------------------------------- | :--------------------- |
| dimension   | 4/4 :  100% |                                                                                                                        |                        |
| first_pixel | 5/5 :  100% |                                                                                                                        |                        |
| tenth_pixel | 5/5 :  100% |                                                                                                                        |                        |
| second_line | 4/5 :  80%  | Second line First Pixel 21 22 23                                                                                       | second_line : 32,32,32 |
| print_pixel | 0/4 :  0%   | Print Pixel (0,0) : 0,0,0<br>Print Pixel (2,3) : 20,30,26<br>Print Pixel (3,2) : 30,20,19<br>Print Pixel (7,7) : 0,0,0 | <br><br><br>           |

# Milestone  statistiques
Score : 9/26 :  34%
## Detail by Feature
| Feature         | Score      | Missed tests                                                                       | Stdout                            |
| :-------------- | :--------- | :--------------------------------------------------------------------------------- | :-------------------------------- |
| max_pixel       | 0/4 :  0%  | Max Pixel black 8x8<br>Max Pixel white 8x8<br>Max Pixel at 6 5<br>Max Pixel at 3 4 | max_pixel : (0, 0): 0, 0, 0<br>m… |
| min_pixel       | 0/4 :  0%  | Min Pixel black 8x8<br>Min Pixel white 8x8<br>Min Pixel at 6 5<br>Min Pixel at 3 4 | min_pixel : (0, 0): 0, 0, 0<br>m… |
| min_component R | 2/3 :  66% | Min Component R of white 8x8                                                       | min_component R (7, 7): 255       |
| min_component G | 2/3 :  66% | Min Component G of white 8x8                                                       | min_component G (7, 7): 255       |
| min_component B | 2/3 :  66% | Min Component B of white 8x8                                                       | min_component B (7, 7): 255       |
| max_component R | 1/3 :  33% | Max Component R of black 8x8<br>Max Component 2 0 255                              | max_component R (7, 7): 0<br>max… |
| max_component G | 1/3 :  33% | Max Component G of black 8x8<br>Max Component 2 0 255                              | max_component G (7, 7): 0<br>max… |
| max_component B | 1/3 :  33% | Max Component B of black 8x8<br>Max Component 2 0 255                              | max_component B (7, 7): 0<br>max… |

# Milestone  colors
Score : 34.75/35 :  99%
## Detail by Feature
| Feature              | Score         | Missed tests | Stdout |
| :------------------- | :------------ | :----------- | :----- |
| color_red            | 5/5 :  100%   |              |        |
| color_blue           | 5/5 :  100%   |              |        |
| color_green          | 5/5 :  100%   |              |        |
| color_gray           | 5/5 :  100%   |              |        |
| color_invert         | 5/5 :  100%   |              |        |
| color_gray_luminance | 5/5 :  100%   |              |        |
| color_desaturate     | 4.75/5 :  95% |              |        |

# Milestone  transform
Score : 3/15 :  20%
## Detail by Feature
| Feature           | Score       | Missed tests                                                   | Stdout   |
| :---------------- | :---------- | :------------------------------------------------------------- | :------- |
| rotate_cw         | 0/3 :  0%   | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| rotate_acw        | 3/3 :  100% |                                                                |          |
| mirror_horizontal | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_vertical   | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_total      | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |

# Milestone  resize
Score : 0/60 :  0%
## Detail by Feature
| Feature        | Score      | Missed tests                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Stdout                            |
| :------------- | :--------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| scale_nearest  | 0/20 :  0% | scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3                                                                                 | <br><br><br><br><br><br><br><br>… |
| scale_bilinear | 0/20 :  0% | scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12                               | <br><br><br><br><br><br><br><br>… |
| scale_crop     | 0/20 :  0% | scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10 | <br><br><br><br><br><br><br><br>… |

