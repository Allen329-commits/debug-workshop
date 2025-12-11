#include <iostream>

int main()
{
	unsigned int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size > 0)
	{
		std::cout << t1;
		size--;
		if (size > 0)
		{
			std::cout << ", ";
		}
		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}

	return 0;
}