#include<stdio.h>
main()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z'){
        printf("upper case");
    }
    else if (ch>='a'&& ch<='b'){
        printf("lower case");
    }
    else {
        printf("not an english letter");

    }
    return 0;
    
}

