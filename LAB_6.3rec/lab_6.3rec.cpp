#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type>
Type Sum(Type* a, Type size, Type i, Type S)
{
	if (a[i] % 2 != 0)
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);

}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;

}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* p = new int[n];
	int Low = 1;
	int High = 20;
	Create(p, n, Low, High, 0);
	cout << "a[n] =";
	Print(p, n, 0);
	cout << "Sum = " << Sum(p, n, 0, 0) << endl;
	return 0;
	delete[] p;
}
