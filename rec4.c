#include<stdio.h>
int converttemp(float celsius);
int main()
{
    float far=converttemp(5);
    printf("the temp is : %f",far);
    
    return 0;
}
int converttemp(float celsius){
   float far= celsius * (9/5)+32;
   return far;
}
