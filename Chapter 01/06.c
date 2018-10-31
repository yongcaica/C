#include <stdio.h>
int main()
{
	int max(int x, int y, int z);
	int a, b, c;
	scanf ("%d, %d, %d", &a, &b, &c);
	int d = max(a, b, c);
	printf ("max is %d\n", d);
	return 0;
}

int max(int x, int y, int z)
{
	int n;
	if(x>y) n=x;
	else n=y;
	if(n>z) return(n);
	else return(z);
}
