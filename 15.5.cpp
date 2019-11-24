#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Rus");
	int n, i, a, b;
	cout << "Введите размер массива: ";
	cin >> n;
	int* m = new int[n];
	cout << "Введите элементы массива А: ";
	for (i = 0; i < n; i++) cin >> m[i];
	b = m[0];
	for (i = 1; i < n; i++)
		if (m[0] >= m[i] && m[0] < m[i + 1])
			a = i;
	for (i = 0; i < a; i++) {
		m[i] = m[i + 1];
		m[a] = b;
	}
	for (i = 0; i < n; i++)
		cout << "Элемент " << i << " массива A " << m[i] << endl;
	return 0;
}
