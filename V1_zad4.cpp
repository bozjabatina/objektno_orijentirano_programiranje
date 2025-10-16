#include <iostream>

char& at(char* niz, int i)
{
	return niz[i];
}

int main()
{
	char niz[] = "meow";
	at(niz, 1) += 1;
	std::cout << niz << std::endl;
	return 0;
}