/*
	BINARY SEARCH - ITERATIVE AND RECURSIVE METHODS
	Author: Anoop Garlapati
*/

#include <stdio.h>
#include <limits.h>

int iterative_binary_search(int arr[], int key, int min, int max)
{
	while(min <= max)
	{
		int mid = (min+max)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]<key)
			min = mid+1;
		else
			max = mid-1;
	}
	return INT_MAX;
}

int recursive_binary_search(int arr[], int key, int min, int max)
{
	if(max<min)
		return INT_MAX;
	else
	{
		int mid = (min+max)/2;
		if(arr[mid]>key)
			return recursive_binary_search(arr, key, min, mid-1);
		else if(arr[mid]<key)
			return recursive_binary_search(arr, key, mid+1, max);
		else
			return mid;
	}
}

int main()
{
	int i;
	int arr[5] = {5, 1, 2, 4, 3};
	
	int ans = recursive_binary_search(arr, 4, 0, 4);
	printf("%d", ans);
	

	return 0;
}
