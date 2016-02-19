/*
	BUBBLE AND OPTIMIZED BUBBLE SORT
	Author: Anoop Garlapati
*/

#include <stdio.h>

bubble_sort(int arr[], int size)
{
	int flag = 1, i;
	while(flag==1)
	{
		flag = 0;
		for(i=1; i<size; i++)
		{
			if(arr[i-1]>arr[i])
			{
				int temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
				flag = 1;
			}
		}
	}
}

optimized_bubblesort(int arr[], int size)
{
	int flag = 1, i;
	while(flag == 1)
	{
		flag =0;
		for(i=1; i<size; i++)
			if(arr[i-1]>arr[i])
			{
				int temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
				flag = 1;
			}
		size = size-1;
	}
}

int main()
{
	int i;
	int arr[5] = {5, 1, 2, 4, 3};

	optimized_bubblesort(arr, 5);
	
	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}