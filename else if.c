main()
{
    int marks ;
    printf("enter the marks");
    scanf("%d",&marks);
    
    if(marks<=30&&marks>=0){
        printf("c grade\n");
    }
    else if (marks >30 && marks <90){
        printf("b grade\n");
        
    }
    else if (marks >90&& marks <=100){
        printf("a grade\n");
    }
    else if (marks>100||marks<0){
        printf("wrong marks\n");
        }