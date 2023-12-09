#include <stdio.h>
#include <math.h>

int square(int n);
int squareroot(int n);
int reverse(int n);
void main()
{
    int a,b,c,d;
    for(int i = 100;i<=999;i++)
    {
        a = square(i);
        d = reverse(a);
        b = squareroot(d);
        c = reverse(b);
        if(i==c)
        printf("%d ", i);
        else
        continue;
}
}
int square(int n)
{
int x;
    x = n*n;
    return x;
}
int squareroot(int n)
{
    int x;
    x = (int)sqrt(n);
    return x;
}
int reverse(int n)
{
    int rem=0,ans=0;
    while(n)
    {
    rem = n%10;
    ans = ans*10 + rem;
    n/=10;
    }
    return ans;
}
