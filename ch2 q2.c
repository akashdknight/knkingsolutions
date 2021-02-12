#include <stdio.h>

int main()
{ 
    printf("Radius of the sphere is 10 m \n");
    
    printf("Volume of the cube is %f\n", (4 * 3.14 * 1000)/3);  
    /*
      In this code no need to use 4.0f as 3.14 will take care
      of conversion to double value
      and 1000 is written after cubing 10 which is radius.
    */

    return 0;
}