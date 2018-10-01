#include <iostream>
#include <cctype>

void megaphone(char *str)
{
	int i = 0;
	for(; str[i] != '\0'; i++)
		std::cout << (char)toupper(str[i]);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			megaphone(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << "\n";
	}
}
