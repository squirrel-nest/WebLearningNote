/*
题目:常见算法时间函数的增长趋势分析
*/
#include<stdio.h>
#include<math.h>
double log2(double n)
{



}
long exponent(int n)
{



}
long factorial(int n)
{



}
void fun(int n)
{
printf("   n     log2(n)     sqrt(n)      nlog2(n)        n^2        n^3        2^n           n!\n");
printf("===================================================================================================\n");
for(int i=1;i<=n;i++)
   {
      printf(" %2d\t",i);
      printf(" %5.2f\t",log2(double(i)));
      printf("    %5.2f\t",sqrt(i));
      printf(" %7.2f\t",i*log2(double(i)));
      printf("%5d\t",i*i);
      printf(" %6d\t",i*i*i);
      printf("  %8d\t",exponent(i));
      printf("%8d\n",factorial(i));
}
}
int main()
{
  int n=15;
 fun(n);
return 1;
}
