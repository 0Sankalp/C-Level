/*Calculate the area of circle and modify the same program to calculate the volume of
cylnder given its radius and height*/

#include <stdio.h>

int main(){
    int radius=7;;
    int height=12;
 
    printf("The area of circle with radius %d is %f\n", radius, 3.14*radius*radius);
    printf("The volume of cylinder is %f\n", 3.14*radius*radius*height);
    return 0;
    
    
}

/*output
The area of circle with radius 7 is 153.860000
The volume of cylinder is 1846.320000
*/