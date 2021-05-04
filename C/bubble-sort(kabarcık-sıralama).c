#include <stdio.h>

int main()
{
	int list[100], count,i,j,temp;

	printf("How many numbers will you enter?:");
	scanf("%d", &count);

	printf("Write the numbers\n");
	for (i = 0; i < count; i++)
	{
		scanf("%d", &list[i]);
	}

	for (i = 0; i < (count - 1); i++)
	{
		for (j = 0; j < (count - 1 - i); j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	printf("Sorted list:\n");
	for (i = 0; i < count; i++)
	{
		printf("%d ", list[i]);
	}
	return 0;

}