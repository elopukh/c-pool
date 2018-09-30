#include <iostream>
#include <cctype>

void megaphone(char *str)
{
	for(int i = 0; str[i] != '\0'; i++)
		std::cout << (char)toupper(str[i]);
	std::cout << " ";
}

int main(int argc, char **argv)
{
	if (argc < 2)
	std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*\n";
	else
	{
		for (int i = 1; i < argc; i++)
			megaphone(argv[i]);
		std::cout << "\n";
	}
}
