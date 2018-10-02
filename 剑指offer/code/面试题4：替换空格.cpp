#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int get_space_num(char *a)
{
	int num = 0;
	while(*a != '\0')
	{
		if(*a == ' ') num++;
		a++;
	}
	return num;
}
void calc(char a[], int len)
{
	int newlen = len+2*get_space_num(a);
	while(len < newlen)
	{
		while(a[len] != ' ')
		{
			a[newlen--] = a[len--];
		}
		len--;
		a[newlen--] = '0';
		a[newlen--] = '2';
		a[newlen--] = '%';
	}
}
void main()
{
	char a[] = "1 2 3 1";
	calc(a, sizeof(a));
}
