#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,dist;
	printf("enter the first coordinate");
	scanf("%f %f",&x1,&x2);
		printf("enter the second coordinate");
	scanf("%f %f",&y1,&y2);
	dist=sqrt((x2-x1)*(x2-x1)+(y1-y2)*(y1-y2));
	printf("the distance=%f",dist);
	return 0;
	
}
