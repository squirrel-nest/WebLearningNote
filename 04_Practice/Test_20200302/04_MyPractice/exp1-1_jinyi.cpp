/*
题目:累加和时间验证
*/
#include<stdio.h>
#include<time.h>
#include<math.h>
long add1(long n)  /* 逐个相加法  */
{
  
ccc



}
void AddTime1(long n)
{
clock_t t;
long sum;
t=clock();
sum=add1(n);
t=clock()-t;
printf("方法1:\n");
printf(" 结果1 ~ %d之和:%ld\n",n,sum);
printf(" 用时:%lf秒\n",((float)t)/CLOCKS_PER_SEC);
}
long add2(long n)   /*  高斯法  */
{



}
void AddTime2(long n)
{
clock_t t;
long sum;
t=clock();
sum=add2(n);
t=clock()-t;
printf("方法2:\n");
printf(" 结果1 ~ %d之和:%ld\n",n,sum);
printf(" 用时:%lf秒\n",((float)t)/CLOCKS_PER_SEC);
}
int main()
{
  int n;
  printf("n(大于1000000):");
  scanf("%d",&n);
if(n<1000000) return 0;
AddTime1(n);
AddTime2(n);
return 1;
}
