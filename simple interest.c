#include<stdio.h>

int main()
{
	float p,r,t,si;
	printf("enter the princile:,rate: and time\n");
	scanf("%f %f %f",&p,&r,&t);
	
	si=(p*r*t)/100;
	printf("the si=%f",si);
	return 0;
	
}
