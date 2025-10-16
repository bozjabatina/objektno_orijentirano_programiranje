#include <iostream>

int overload(int a)
{
	int low = 5;
	int high = 50;
	if (a < low)
	{
		return low;
	}
	else if (a > high)
	{
		return high;
	}
	else
	{
		return a;
	}
}

double overload(double a)
{
	double low = 5.65;
	double high = 50.56;
	if (a < low)
	{
		return low;
	}
	else if (a > high)
	{
		return high;
	}
	else
	{
		return a;
	}
}

int main()
{
	std::cout << overload(35) << " = result of int" << std::endl;
	std::cout << overload(66.66) << " = result of double" << std::endl;
	return 0;
}