#include <iostream> 
using namespace std;
int
main()
{
	int i, j;
	int n = 10;
	int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[n] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	for (i = 0; i <= n - 1; i++)
	{
		j = a[i];
		a[i] = b[i];
		b[i] = j;
		cout << "a[] =" << " " << a[i];
		cout << "b[] =" << " " << b[i];
	}
	return 0;
}
