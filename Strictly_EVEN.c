#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n;i+=2)
    {
        if(arr[i]%2==0)
        {
            printf("False");
            c++;
            break;
        }
        }
        if(c==0)
        {
            printf("True");
        }
    }
