#include <iostream>

int main()
{
	char* p="tes?t2test?yes";
	while (*p) {
		if (*p == '?')
			std::cout << "find question" << '\n';
		*p++;
	}

	std::cout <<"the end!";
	std::cin.get();

	return 0;
}