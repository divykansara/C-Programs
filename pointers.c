#include<stdio.h>
int main(){
    int age =11;
    int *ptr=&age;
    int Age=*ptr;
/*
* = VALUE AT ADDRESS OPERATOR
& = ADDRESS OF OPERATOR
*/
    printf("%d",Age);
    return 0;
}
