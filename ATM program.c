#include<stdio.h>
int main()
{
	float x,y;
	char ch;
	printf("Enter initial amount");
	scanf("%f", &x);
	printf("Enter \nc for credit \nd for debit \nb for balance");
	scanf("\n%c", &ch);
	switch(ch)
	{
		case 'c':
			printf("Enter credit amount\n");
			scanf("%f", &y);
			x=x+y;("new amount =%f",x);
			break;
		case 'd':
			printf("Enter debit amount\n");
			scanf("%f", &y);
			if(x>=y)
			{
				x=x-y;
				printf("new amount=%f",x);
			}
			else
			{
				printf("insufficent amount in your account");
			}
			break;
		case 'b':
			printf("amount in your account=%f",x);
			break;
		defoult:
			printf("choose correct option for operation");
		
	}
}

