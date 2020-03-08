/*
题目:复数的加减
*/
#include <stdio.h>
#include <math.h>
#include <malloc.h>
typedef struct 
{
	float Realpart;
	float Imagepart;
}Complex;

Complex Add(Complex C1,Complex C2);
Complex Sub(Complex C1,Complex C2);
Complex Mul(Complex C1,Complex C2);

void Create(Complex &C,float x,float y)
{
    C.Realpart=x;
    C.Imagepart=y;
}
void PrintComplex(Complex z)//打印输出成a+bi的形式
{
	if(z.Imagepart>0)
	    printf("%.2f+%.2fi\n",z.Realpart,z.Imagepart);
	else
        printf("%.2f%.2fi\n",z.Realpart,z.Imagepart);
}
void main()//程序运行举例
{
	float x1,y1,x2,y2;
	Complex z,z1,z2;
    Create(z,0,0);
    printf("\n请输入复数1的实部和虚部值（用空格分隔）:");
	scanf("%f %f",&x1,&y1);
    Create(z1,x1,y1);
	printf("\n请输入复数2的实部和虚部值（用空格分隔）:");
	scanf("%f %f",&x2,&y2);
    Create(z2,x2,y2);
    printf("\n复数1为:");
    PrintComplex(z1);
	printf("\n复数2为:");
    PrintComplex(z2);		
   	z=Add(z1,z2);
   	printf("\n两复数之和为:");
    PrintComplex(z);	
    z=Sub(z1,z2);
    printf("\n两复数之差为:");
	PrintComplex(z);
   z=Mul(z1,z2);
   printf("\n两复数之积为:");
   PrintComplex(z);
        
}
//--------------------------------------------------------------
/*注意!线上面的内容是不能够更改的*/
Complex Add(Complex z1,Complex z2)
{    





}

Complex Sub(Complex z1,Complex z2)
{    



}

Complex Mul(Complex z1,Complex z2)
{
     Complex product;
     product.Realpart=z1.Realpart*z2.Realpart-z1.Imagepart*z2.Imagepart;
     product.Imagepart=z1.Realpart*z2.Imagepart+z2.Realpart*z1.Imagepart;
     return product;
}


