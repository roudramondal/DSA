#include<stdio.h>
int main(){
int i,j,a[]={9,6,2,5,8,7};
int size=6;
for(i=0;i<size-1;i++){
    for(j=0;j<size-1;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<size;i++){
    printf("%d\n",a[i]);
}


return 0;
}
