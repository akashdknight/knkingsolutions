#include <stdio.h>

int main(void)
{
    float r ;
    printf("This program calculates the volume of the given sphere \n Please enter the radius of sphere:");
    //asking the user to enter the value of the radius.
   
    scanf("%f", &r);
    //storing the entered value in r.
    //This is not working with double r pls help me wid this sir
  
    printf("The volume of the sphere with the radius %f is %f",r ,(4*3.14*r*r*r)/3);
    //calculating and displaying the volume of the sphere.

    return 0;

}