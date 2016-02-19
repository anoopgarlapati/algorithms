/*
	INSERTION SORT
	Author: Anoop Garlapati
*/

#include <stdio.h>

insert_sort(int arr[], int size)
{
	int i, j, key;
	for(i=1; i<size; i++)
	{
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main()
{
	int i;
	int arr[5] = {5, 1, 2, 4, 3};

	insert_sort(arr, 5);
	
	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}