#include <iostream> 
using namespace std;
int
main()
{
	int i, k, s, c;
	int n = 9;
	int a[n] = { 1, 4, 65, 4, 7, 8, 98, 5, 0 };
	int b[n] = { 4, 56, 8, 79, 1, 20, 4, 76, 8 };
	cin >> k;
	c = 0;
	s = 0;
	for (i = 0; i <= k; i++)
	{
		s = s + a[i];
		c++;
	}
	b[k] = s / c;
	for (i = 0; i <= n - 1; i++)
	{
		if (i == k)
		{
			b[i] = b[k];
			cout << b[i] << " ";
		}
		else
			cout << b[i] << " ";
	}
	return 0;
}
