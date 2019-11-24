#include <iostream> 
using namespace std;
int
main()
{
	int i, j, k;
	int n = 11;
	int m[n] = { 2, 45, 6, 44, 7, 8, 3, 23, 76, 99, 4 };
	int min = m[0];
	int max = m[1];
	for (i = 2; i <= n - 1; i++)
		if (m[i] < min)
		{
			min = m[i];
			j = i;
		}
	for (i = 2; i <= n - 1; i++)
		if (m[i] > max)
		{
			max = m[i];
			k = i;
		}
	cout << min << " " << j;
	cout << endl;
	cout << max << " " << k;
	cout << endl;
	for (i = 0; i <= n - 1; i++)
	{
		if ((i > k && i < j) || (i > j && i < k))
		{
			m[i] = 0;
			cout << m[i] << " ";
		}
		else
			cout << m[i] << " ";
	}
	return 0;
}