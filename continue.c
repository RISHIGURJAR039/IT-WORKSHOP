#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0)  // odd integer only
        continue;
         printf("%d\n",i);
    }
    return 0;
}

