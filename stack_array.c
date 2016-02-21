/*
	STACK IMPLEMENTATION USING ARRAY
	Author: Anoop Garlapati
*/
#include <stdio.h>
#define UNDERFLOW 0
	
char S[5];
int top=-1;

int is_empty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void push(char x)
{
	S[++top] = x;
}

char pop()
{
	if(is_empty())
		return UNDERFLOW;
	else
		return S[top--];
}

int main()
{
	push('a');
	push('b');
	push('c');
	char x = pop();
	printf("%c\n", x);
	push('d');
	x = pop();
	printf("%c\n", x);
	x = pop();
	printf("%c\n", x);
	x = pop();
	printf("%c\n", x);

	return 0;
}