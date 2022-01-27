#include "Karen.hpp"


size_t	hash(std::string str)
{
	std::string strs[]=
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (size_t i = 0; i < sizeof(strs) / sizeof(std::string); ++i)
	{
		if (strs[i] == str)
			return (i + 1);
	}
	return (9);
}


int main(int argc, char *argv[])
{
	Karen	karen;

	switch (hash(argv[argc - 1]))
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}