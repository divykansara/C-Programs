#include<stdio.h>

int sum(int n);
int main()
{
    printf("sum is : %d",sum(5));
    return 0;
}
//recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumi=sum(n-1); //sum of 1 to n
    int sumn=sumi+n;
     return sumn;
}
