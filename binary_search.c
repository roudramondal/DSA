#include<stdio.h>
void main()
{
    int a[100],i,n,item,beg,mid,end,loc;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key item:");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    loc=0;
    while(beg<=end){
        mid=(beg+end)/2;
        if(item==a[mid]){
            printf("Search is Successful\n");
            loc=mid;
            printf("Location is:%d",loc);
            break;
        }
        else if(item<a[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    if(loc==0)
    printf("Item is not found");
}
