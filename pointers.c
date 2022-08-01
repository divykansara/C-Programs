#include<stdio.h>
int main(){
    int age =11;
    int *ptr=&age;
    int Age=*ptr;

    printf("%d",Age);
    return 0;
}