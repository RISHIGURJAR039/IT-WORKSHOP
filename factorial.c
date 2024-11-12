#include<stdio.h>
int main(){            //factorial of first n term
int n=4;
int pro=0;
for(int i=1;i<=n;i++){
    pro=pro*i;
    printf("the factorial of %d is %d\n ",i,pro);
}    
    return 0;
}