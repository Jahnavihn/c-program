#include<stdio.h>
#include<math.h>
#define pi 3.142
int main()
{
	 float x,nume,deno,term,sum,degree;
	 int i;
	 printf("enter the degree\n\n");
	 scanf("%f",&degree);
	 x=degree*(pi/180.0);
	 i=0;
	 nume=1.0;
	 deno=1.0;
	 sum=0;
	 do
	 {
		 term=nume/deno;
		 sum=sum+term;
		 i=i+2;
		 
		 nume=-nume*x*x;
		 deno=deno*(i)*(i-1);
	 }
	 while(fabs(term)>=0.00001);
	 printf("\ncompute value of cos(%f)=%f\n",degree,sum);
	 printf(" using in-built function  cos(%f)=%f\n\n",degree,cos(x));
	 return 0;
}

