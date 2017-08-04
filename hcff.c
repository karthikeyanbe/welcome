#include<conio.h>
void main()
{
	clrscr();
	int a, b, x, y, t, hcf, lcm;
	printf("Enter two number : ");
	scanf("%d%d",&x, &y);
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	printf("HCF = %d\n",hcf);
	getch();
}
