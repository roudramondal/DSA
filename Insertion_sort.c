#include<stdio.h>
int main(void)
{
    int n,i,j,temp,A[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j>0&&A[j-1]>A[j])
        {
            temp=A[j];
            A[j]=A[j-1];
            A[j-1]=temp;
            j--;
        }
    }
    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",A[i]);
      
    }
      return 0;
}