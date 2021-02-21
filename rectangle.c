// to display the area and perimeter of the rectangle by using command line arguments
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double height , width, perimeter, area;
    height = atof(argv[1]);
    width = atof(argv[2]);
    perimeter = 2*(height + width);
    area = height * width;
    printf("Height : %f\nWidth : %f\nPerimeter : %f\n\n", height, width, perimeter);
    printf("Height : %f\nWidth : %f\nArea : %f", height, width, area);
    return 0;
}