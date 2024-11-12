#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int totalpair=0;
int x=12;    // sum of two array equal to this no
for(int i=1;i<=7;i++){
    for(int j=i+1;j<=7;j++){
        if(arr[i]+arr[j]==x){
        totalpair++;
        printf("(%d,%d) \n",arr[i],arr[j]);
    }
    }
}
printf(" no of pairs are - %d",totalpair);
return 0;
}