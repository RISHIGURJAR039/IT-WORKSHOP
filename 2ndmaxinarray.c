// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,14,5,6,7};
//     int max=a[0];
//     int smax=a[0];
//     for(int i=0;i<7;i++){        
//         if(max<a[i])
//         max=a[i];       
//     }
//         for(int i=0;i<7;i++){
//      if(a[i]!=max && smax<a[i])
//         smax=a[i];
// }
// printf("%d %d",max,smax);
// return 0;
// }





#include<stdio.h>
int main(){
    int a[]={1,2,3,14,5,6,7};
    int max=a[0];
    int smax=a[0];
    for(int i=0;i<7;i++){        
        if(max<a[i]){
       smax=max;
     max=a[i]; 
        }
    else if (smax<a[i])
     smax=a[i];
     }
printf("%d %d",max,smax);
return 0;
}
