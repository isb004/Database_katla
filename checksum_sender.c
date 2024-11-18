#include<stdio.h>
int main(){
    int n,a[100],b[100],p;
    printf("Enter no of bits for checksum\n");
    scanf("%d",&n);
    printf("Enter a and b array in reverse order\n");
    for(int i=n-1;i>=0;i--){
        scanf("%d",&a[i]);
    }
     for(int i=n-1;i>=0;i--){
        scanf("%d",&b[i]);
    }
    checkSum(a,b,n);
     int sum[100],carry;
    for(int i=0;i<n;i++)
    {
        sum[i]=(a[i]+b[i]+carry)%2;
        carry=(a[i]+b[i]+carry)/2;

    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",sum[i]);
    }
    printf("\n");
    if(carry=1){
        for(int i=0;i<n;i++){
            p=(sum[i]+carry)%2;
            carry=(sum[i]+carry)/2;
            sum[i]=p;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(sum[i]==0)
        sum[i]=1;
        else
        sum[i]=0;
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",sum[i]);
    }

    
}