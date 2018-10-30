#include <stdio.h>

int rfibo(int);
int sfibo(int);

int main()
{
	for (int i = 3; i < 20; i++)
	{
		if (i % 2 == 1)
		{
			printf("rfibo(%d) = %d\n", i, rfibo(i));
			printf("sfibo(%d) = %d\n", i, sfibo(i));
			printf("\n");
		}
		else
			printf("");
	}

	return 0;
}

int rfibo(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else
		return(rfibo(num - 2) + rfibo(num - 1));

}

int sfibo(int num2)
{
	static int a = 1;
	static int b = 1;
	static int c = a + b;

	if (num2 == 0)
		return 0;
	else if (num2 == 1)
		return 1;
	else if (num2 == 2)
		return 1;
	else if (num2 == 3)
		return 2;
	else
	{
		a = b;
		b = c;
		c = a + b;

		a = b;
		b = c;
		c = a + b;

		return c;
	}

	
}