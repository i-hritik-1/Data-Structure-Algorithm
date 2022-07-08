#include<stdio.h>

inline int maxoftwo(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("Maximum of %d and %d = %d",a,b,maxoftwo(a,b));
    return 0;
}

#include<stdio.h>
int sumuptoN(int n)
{ 
    if(n == 0)
    {
        return n;
    }

    return n + sumuptoN(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = sumuptoN(n);
    printf("Sum of n-natural numbers = %d",sum);
    return 0;
}
