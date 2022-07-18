#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);

        int sum=0;
        for(int i=1;i<=n;i++){
            printf("%d\n",i);
            sum+=(i+5); //1 > 3? +3 = 
            printf("%d\n",sum);
        }
        printf("sum is :%d",sum);
}
