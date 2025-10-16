#include <iostream>
#include <cctype>
#include <string>


int main()
{
	std::string s;
	std::cout << "Unesite string: " << std::endl;
	std::getline(std::cin, s);
	for (auto& n : s)
	{
		n = toupper(n);
		if (n == ' ')
			n = '_';
		if (isdigit(n))
			n = '*';
	}
	std::cout << s;
	return 0;
}