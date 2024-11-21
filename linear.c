#include<stdio.h>
int main(){
int i,n,item,a[20];

printf("Enter the array size:");
scanf("%d",&n);


printf("enter the array element:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the key element:");
scanf("%d",&item);

for(i=0;i<n;i++){
    if(a[i]==item){
        printf("%d",i);
        break;
    }
}
if(i==n){
    printf("item not found");
}


return 0;
}
