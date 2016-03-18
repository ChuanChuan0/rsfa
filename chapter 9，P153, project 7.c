#include<stdio.h>
void mypower(int a,int b)
{
	int i,j=a,k;
	for(i=b;i>1;i--)
	{
		a=a*j;
	}

	printf("mypower(%d,%d):  %d",j,b,a);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	mypower(x,y);
}
