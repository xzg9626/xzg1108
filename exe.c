#include<stdio.h>
#define n 8
void main()
{
    int a[n]={3,5,6,8,4,9,7};
    for(int i=1;i<n;i++)
    {
        int j,key=a[i];
        for(j=i-1;j>=0;j--)
        {
            if (a[j]>key)
            {
                a[j+1]=a[j];
            }else
            {
                break;
            }
            
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}