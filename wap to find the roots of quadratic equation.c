// wap to find the roots of quadratic equation 

#include<stdio.h>
void main()
{
	int a,b,c;
	float r1,r2,d;
	scanf("%d \n %d \n %d", &a,&b,&c);
	d=sqrt(b*b-(4*a*c));
	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);
	if(r1>0 && r2>0)
	 printf("real and unequal");
	 else if(r1<0 && r2<0)
	 printf("complex and imaginary");
	else
	 printf("real and equal");
}
