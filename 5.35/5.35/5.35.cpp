#include <iostream>
using namespace std;

unsigned long long int fibonacci(int n);
int main()
{
	unsigned int n;
	cout << "How many fibonacci do you want:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(i));
		printf("  ");
	}
	
}
unsigned long long int fibonacci(int n)
{
	int x = 0, y = 1, c = 0;
	if (n < 2)
		return n;
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			c = x + y;
			x = y;
			y = c;
		}
	}
		return c;
}