#include<stdio.h>
int main()
{
    int n,res,i;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        res=0;
        res=i*i;
        if(res==n)
        {
            printf("True");
            break;
        }
    }
    if(res!=n)
    {
        printf("False");
    }
    return 0;
}