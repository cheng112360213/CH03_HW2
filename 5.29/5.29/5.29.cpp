#include <stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int m, n, num1, num2, temp;
	cout << "請輸入兩個數：";
	cin >> num1;
	cin >> num2;
	m = num1;
	n = num2;
	while (num2 != 0) // 餘數不為0，繼續相除，直到餘數為0   36  16
	{
		temp = num1 % num2; // 4 36 16  0 16 4
		num1 = num2;      // 16       4
		num2 = temp;      // 4        0
	}
	printf("最小公倍數是：%d\n", m*n / num1);
}
