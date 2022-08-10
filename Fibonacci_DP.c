#include<stdio.h>
int dp[100];
void initialization()
{
    for(int i = 0;i < 100;i++)
    {
        dp[i] = -1;
    }
}
int fibonacci(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    initialization();
    printf("Input: ");
    scanf("%d",&n);
    int result = fibonacci(n);
    printf("The result is: %d\n",result);
    return 0;
}
