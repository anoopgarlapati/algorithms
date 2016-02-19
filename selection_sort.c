/*
	INSERTION SORT
	Author: Anoop Garlapati
*/

#include <stdio.h>

select_sort(int arr[], int size)
{
	int i, j;
	for(j=0; j<size-1; j++)
	{
		int imin = j;
		for(i=j+1; i<size; i++)
		{
			if(arr[i]<arr[imin])
				imin = i;
		}
		if(imin!=j)
		{
			int temp = arr[j];
			arr[j] = arr[imin];
			arr[imin] = temp;
		}
	}
}

int main()
{
	int i;
	int arr[5] = {5, 1, 2, 4, 3};

	select_sort(arr, 5);
	
	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}