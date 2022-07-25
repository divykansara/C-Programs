#include<stdio.h>
float converttemp(float celsius);
int main()
{
    float far=converttemp(32);
    printf("the temp is : %f",far);
    
    return 0;
}
float converttemp(float celsius){
   float far= celsius * (9.0/5.0)+32;
   return far;
}
