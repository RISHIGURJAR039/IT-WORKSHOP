// 1  1  2  3  5  8  13  21  34  55
#include<stdio.h>
int main(){
 int n=3;     //nth term of fibbonacci series
 int a=1,b=1;
 int sum=1;
 for(int i=1;i<=n-2;i++){
sum=a+b;
a=b;
b=sum;
 }
printf("%d",sum);
    return 0;
}