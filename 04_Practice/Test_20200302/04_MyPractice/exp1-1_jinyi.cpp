/*
��Ŀ:�ۼӺ�ʱ����֤
*/
#include<stdio.h>
#include<time.h>
#include<math.h>
long add1(long n)  /* �����ӷ�  */
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
printf("����1:\n");
printf(" ���1 ~ %d֮��:%ld\n",n,sum);
printf(" ��ʱ:%lf��\n",((float)t)/CLOCKS_PER_SEC);
}
long add2(long n)   /*  ��˹��  */
{



}
void AddTime2(long n)
{
clock_t t;
long sum;
t=clock();
sum=add2(n);
t=clock()-t;
printf("����2:\n");
printf(" ���1 ~ %d֮��:%ld\n",n,sum);
printf(" ��ʱ:%lf��\n",((float)t)/CLOCKS_PER_SEC);
}
int main()
{
  int n;
  printf("n(����1000000):");
  scanf("%d",&n);
if(n<1000000) return 0;
AddTime1(n);
AddTime2(n);
return 1;
}
