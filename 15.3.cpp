#include <iostream> 
using namespace std;
int
main()
{
	int i, a;
	int n = 9;
	int m[n] = { 1, 3, 5, 7, 9, 4 , 2, 99 };
	for (i = 0; i <= n - 1; i++)
	{
		if (m[i] % 2 == 1)
			a = m[i];
	}
	cout << a << endl;
	for (i = 0; i <= n - 1; i++)
	{
		if (m[i] % 2 == 1)
		{
			m[i] = m[i] + a;
			cout << m[i] << " ";
		}
		else
			cout << m[i] << " ";
	}
	return 0;
}