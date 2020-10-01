#include <stdio.h>

int m,n,result;
int counter=0;
int recursion(int m,int n, int c[])
{
    if(m==0&&n==0)
    return 999;
    else if(n==0)
    return 1;
    else if(n==1)
    return m;
    else if(n%2!=0)
    {
        c[0]++;
        return m*recursion(m,n-1,c);
    }
    else if(n%2==0)
    {
        c[0]++;
        return recursion(m,n/2,c)*recursion(m,n/2,c);
    }
}
void main()
{
    int c[1]={0};
    printf("Input m and n\n");
    scanf("%d %d",&m, &n);
    result=recursion(m,n,c);
    if(result==999)
    printf("Illegal Input\n");
    else 
    {
        if(result==m)
        counter=0;
        printf("%d, %d\n",result,c[0]);
    }
}
