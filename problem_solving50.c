#include<stdio.h>
void mahabub(int a[],int n)
{
    a[n-1]=100;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mahabub(a,n);
}