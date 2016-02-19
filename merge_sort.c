/*
	MERGE SORT
	Author: Anoop Garlapati
*/

#include <stdio.h>
#include <limits.h>

merge(int arr[], int p, int q, int r)
{
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1], R[n2+1];
	int i, j, k;

	for(i=1; i<=n1; i++)
		L[i] = arr[p+i-1];
	for(j=1; j<=n2; j++)
		R[j] = arr[q+j];
	L[n1+1] = INT_MAX;
	R[n2+1] = INT_MAX;
	
	i=1, j=1;
	for(k=p; k<=r; k++)
	{
		if(L[i]<=R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
	}
}

mergesort(int arr[], int p, int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
		mergesort(arr, p, q);
		mergesort(arr, q+1, r);
		merge(arr, p, q, r);
	}
}

int main()
{
	int i;
	int arr[5] = {5, 1, 2, 4, 3};

	mergesort(arr, 0, 4);
	
	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}