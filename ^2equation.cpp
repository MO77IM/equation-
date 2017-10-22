#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	double a,b,c,delta,x1,x2;
	printf("this is a function to solve\na quadratic equation with one unknown(ax^2+bx+c=0)\n");
	printf("please input the value of arguments(a,b,c):\n");
	printf("a\tb\tc\t\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	delta = b*b - 4*a*c;
	if(delta < 0)
	    printf("there is no root\n");
	else if(delta == 0){
		x1 = x2 = -b/(2*a);
		printf("x1=x2=%.4lf\n",x1);
	}
	else{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("x1=%.4lf,x2=%.4lf\n",x1,x2);
	}
	system("pause");
	return 0;
}
