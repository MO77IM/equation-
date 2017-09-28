#include <stdio.h>

int main(void){
	float a1, b1, c1;
	float a2, b2, c2;
	float x1, x2;
	float d;
	printf("please input values(separated by tab)\n");
	printf("a1\tb1\tc1\ta2\tb2\tc2\n");
	scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
	d = a1*b2-a2*b1;
	if(d == 0 && c1*b2 != b1*c2)
	    printf("no root\n");
	else if(d == 0 && c1*b2 == b1*c2)
	    printf("there are infinity roots\n");
	else{
		x1 = (c1*b2-c2*b1)/d;
		x2 = (a1*c2-a2*c1)/d;
		printf("x1=%5.2f,x2=%5.2f\n", x1, x2);
	} 
	getchar();
	getchar();
    return 0;
}

