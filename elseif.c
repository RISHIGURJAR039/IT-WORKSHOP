#include<stdio.h>
int main(){
    int a;
    printf("entre marks ");
    scanf("%d",&a);
 
    if(a>100)
    printf("not valid marks");
    else if(a>90)
    printf("excellent");
    else if(a>70)
    printf("good");
    else if(a>34)
    printf("only pass");
    else if(a>0)
    printf("fail");

    return 0;
}