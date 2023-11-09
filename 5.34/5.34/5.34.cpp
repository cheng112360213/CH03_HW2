#include<iostream>
using namespace std;
int po(int a, int b);
int main()
{
	int c, d,ans;
	cout << "exponent function power(c,d):\n";
	scanf("%d, %d", &c, &d);
	ans=po(c,d);
	printf("power(%d,%d)=%d", c, d,ans);
}

int po(int a, int b)
{
	int i;
	int num = 0;
	num = a;
	for (i = 1;i<b;i++)
	{
		num = num * a;
	}
	return num;
}


