/*
	INSERTION SORT
	Author: Anoop Garlapati
*/

#include <stdio.h>

insert_sort(int arr[], int size)
{
	int i, j, key;
	for(j=2; j<=size; j++)
	{
		key = arr[j];
		i = j-1;
		while(i>0 && arr[i]>key)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
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