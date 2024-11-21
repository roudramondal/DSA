#include<stdio.h>
int main(){

int a[]={31,1,3,23,44,100,7},j,i,min_index;

for(i=0;i<7;i++){
  min_index=i;

  for(j=i+1;j<7;j++){
    if(a[j]<a[min_index]){
        min_index=j;
    }
  }
  int temp=a[i];
  a[i]=a[min_index];
  a[min_index]=temp;
}
for(i=0;i<7;i++){
    printf("%d\n",a[i]);
}
printf("\n\n");


return 0;
}
