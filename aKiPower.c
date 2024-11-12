#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    // if(b==1) return a;  //by the way no need to add this
    int x=powerlog(a,b/2);
    if(b%2==0)
      return x*x;
      else
      return x*x*a;
}
int main(){
    int a=3,b=5;
    int p=powerlog(a,b);
    printf("%d",p);
    return 0;
}