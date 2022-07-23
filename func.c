#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a , float b);

int main(){
   float side = 5.0;
   float radius = 6.0;
   float a=3.0,b=2.0;

   printf("side is : %f\n",squarearea(side));
   printf("radius is : %d\n",circlearea(radius));
   printf("area is : %f\n",rectanglearea(a , b));

   
    return 0;
}

float squarearea(float side){
    return side*side;
} 

float circlearea(float radius){
    return 3.14*radius*radius;
}

float rectanglearea(float a, float b){
    return a*b;
}

