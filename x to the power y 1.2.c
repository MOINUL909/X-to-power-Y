#include<stdio.h>
void calculatepower(double b, double exp)
{
    double result=1,i;
    for(i=1;i<=exp;i++)
    {
        result = result *b;
    }
    printf("%.1lf\n",result);
}
int main()
{
    calculatepower(2,3);
    calculatepower(3,3);
    calculatepower(4,3);
    calculatepower(5,3);
    calculatepower(2,3);
}

