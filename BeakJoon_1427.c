#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	int mok = 0;
	int namo;
	int arr[10] = { 0 };
	int i = 0;
	int ct = 0;

	while (a > 0)
	{
		namo = a % 10;
		a = a / 10;

		arr[i] = namo;

		i++;
		ct++;
	}

	int temp = 0;

	for (int i = 0; i < ct; i++)
	{
		for (int j = 0; j < ct-1-i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int j = 0; j < ct; j++)
	{
		printf("%d", arr[j]);
	}


	return 0;
}
