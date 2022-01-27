#include <string>
#include <iostream>
#include <iomanip>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;

	std::cout << "string: " << std::hex << &brain << std::endl;
	std::cout << "string_ptr: " << std::hex << brain_ptr << " [" << *brain_ptr << "]" <<std::endl;
	std::cout << "string_ref: " << std::hex << &brain_ref << " [" << brain_ref << "]" <<std::endl;
	return (0);
}