#include <iostream>

int* fibbonyacci(int n)
{
	int* niz = new int[n]{ 1,1 };
	for (int i = 2; i < n; i++)
		niz[i] = niz[i - 2] + niz[i - 1];
	return niz;
}

int main()
{
	int n = 12;
	int* niz = fibbonyacci(n);
	for (int i = 0; i < n; i++)
	{
		std::cout << niz[i] << ",";
	}
	delete[] niz;
	niz = nullptr;
}