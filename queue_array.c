/*
	QUEUE IMPLEMENTATION USING ARRAY
	Author: Anoop Garlapati
*/
#include <stdio.h>
#define UNDERFLOW 0
#define n 10

char Q[n];
int head=-1, tail=-1;

int is_empty()
{
	if(head==-1 && tail==-1)
		return 1;
	else
		return 0;
}

int is_full()
{
	if(tail==n-1)
		return 1;
	else
		return 0;
}

void enqueue(char x)
{
	if(is_full())
		return;
	else if(is_empty())
	{
		head=0;
		tail=0;
	}
	else
	{
		tail++;
	}
	Q[tail] = x;
}

void dequeue()
{
	if(is_empty())
		return;
	else if(head==tail)
	{
		head = -1;
		tail = -1;
	}
	else
		head++;
}

void printq()
{
	int i;
	for(i=head; i<=tail; i++)
		printf("%c ", Q[i]);
	printf("\n");
}

int main()
{
	enqueue('a');
	enqueue('b');
	enqueue('c');
	printq();
	dequeue();
	printq();
	enqueue('d');
	enqueue('e');
	enqueue('f');
	enqueue('g');
	printq();
	enqueue('h');
	enqueue('i');
	printq();

	return 0;
}