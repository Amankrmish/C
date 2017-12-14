#include<stdio.h>
int main()
{
	float no,fra;
	int ip;
	printf("enter a number");
	scanf("%f",&no);
	ip=(int)no;
	fra=no-ip;
	printf("ip=%d and fra=%f",ip,fra);
	return 0;
}
