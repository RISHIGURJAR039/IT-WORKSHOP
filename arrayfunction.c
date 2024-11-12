#include<stdio.h>
void fun(int arr[]){
    arr[0]=10;
    return ;

}
int main(){
int arr[]={1,2,3,4,5};
printf("%d\n",arr);     // I also dont know what is this
printf("%d\n",arr[0]);
fun(arr);
printf("%d",arr[0]);
    return  0;
}