#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int num1 = atoi(argv[1]);
		char op = argv[2][0];
		int num2 = atoi(argv[3]);
		
		if(op == '+')
		{
			printf("%d + %d = %d", num1, num2, num1 + num2);
		}
		else
		{
			if(op == '-')
			{
				printf("%d - %d = %d", num1, num2, num1 - num2);
			}
			else
			{
				if(op == '*')
				{
					printf("%d * %d = %d", num1, num2, num1 * num2);
				}
				else
				{
					if(op == '/')
					{
						printf("%d / %d = %d", num1, num2, num1 / num2);
					}
					else
					{
						if(op == '%')
						{
							printf("%d %% %d = %d", num1, num2, num1 % num2);
						}
						else
						{
							printf("Wrong Operator.");
						}
					}
				}
			}
		}
	}
}