#include <string>
#include <iostream>
#include <vector>
using namespace std;

const int MAXROW = 4;
const int MAXCOL = 4;

int data[MAXROW][MAXCOL] = 
{{1,2,8,9},
{2,4,9,12},
{4,6,10,13},
{6,8,11,15}};

bool isok(int a[MAXROW][MAXCOL], int r, int c, int value)
{
	if((r>MAXROW) || (c<0)) return false;
	else{
		if(a[r][c] == value) return true;
		else if(a[r][c] > value) return isok(a,r,c-1,value);
		else return isok(a,r+1,c,value);
	}
}
void main()
{
	cout << isok(data,0,3,7) << endl;
}
