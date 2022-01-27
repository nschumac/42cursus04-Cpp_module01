#include <fstream>
#include <iostream>
#include <string>

std::size_t	myFind(std::string buf, std::string str1)
{
	std::size_t	ret;
	std::string	whitespaces = "\n\t .,!?\"()";
	unsigned int i = 0;

	ret = std::string::npos;
	for (; i < whitespaces.length() && ret == std::string::npos; i++)
	{
		ret = buf.find(str1 + whitespaces[i]);
		if (ret != 0 && whitespaces.find(buf[ret - 1]) == std::string::npos)
			ret = std::string::npos;
	}
	return (ret);
}

void	replaceString(std::string &buf, std::string str1, std::string str2)
{
	std::string newbuf;
	std::size_t	found;

	found = myFind(buf, str1);
	while (found != std::string::npos)
	{
		newbuf = buf.substr(0, found);
		newbuf += str2;
		newbuf += buf.substr(found + str1.length());
		buf = newbuf;
		found = myFind(buf, str1);
	}
}


int main(int argc, char *argv[])
{
	std::string		filename;
	std::fstream	orgFile;
	std::fstream	replaceFile;
	std::string		buf;

	if (argc != 4)
	{
		std::cout << "Wrong Usage [./replace FILENAME STR1 STR2]" << std::endl;
		return (1);
	}
	filename = argv[1];
	orgFile.open(filename, std::fstream::in);
	filename += ".replace";
	replaceFile.open(filename, std::fstream::out);
	do{
		std::getline(orgFile, buf);
		if (!orgFile.eof())
			buf += "\n";
		replaceString(buf, argv[2], argv[3]);
		replaceFile << buf;
	}while (!orgFile.eof());
	orgFile.close();
	replaceFile.close();
}