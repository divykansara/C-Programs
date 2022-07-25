#include<stdio.h>

int fact(int n);
int main(){
    printf("fact is : %d",fact(2));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int facti=fact(n-1);
    int factn=facti+n;
    return factn;
}