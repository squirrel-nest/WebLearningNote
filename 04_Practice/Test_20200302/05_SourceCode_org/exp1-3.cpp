/*
��Ŀ:�����ļӼ�
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
void PrintComplex(Complex z)//��ӡ�����a+bi����ʽ
{
	if(z.Imagepart>0)
	    printf("%.2f+%.2fi\n",z.Realpart,z.Imagepart);
	else
        printf("%.2f%.2fi\n",z.Realpart,z.Imagepart);
}
void main()//�������о���
{
	float x1,y1,x2,y2;
	Complex z,z1,z2;
    Create(z,0,0);
    printf("\n�����븴��1��ʵ�����鲿ֵ���ÿո�ָ���:");
	scanf("%f %f",&x1,&y1);
    Create(z1,x1,y1);
	printf("\n�����븴��2��ʵ�����鲿ֵ���ÿո�ָ���:");
	scanf("%f %f",&x2,&y2);
    Create(z2,x2,y2);
    printf("\n����1Ϊ:");
    PrintComplex(z1);
	printf("\n����2Ϊ:");
    PrintComplex(z2);		
   	z=Add(z1,z2);
   	printf("\n������֮��Ϊ:");
    PrintComplex(z);	
    z=Sub(z1,z2);
    printf("\n������֮��Ϊ:");
	PrintComplex(z);
   z=Mul(z1,z2);
   printf("\n������֮��Ϊ:");
   PrintComplex(z);
        
}
//--------------------------------------------------------------
/*ע��!������������ǲ��ܹ����ĵ�*/
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


