#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

int print_usage(void){
	std::cout << "error: too many/few arguments. Usage : infile stringToReplace replacementString" << std::endl;
	return 1;
}

int empty_string(std::string t1, std::string t2, std::string t3)
{
	if (t1 == "")
		std::cerr << "error: first string is empty" << std::endl;
	else if (t2 == "")
		std::cerr << "error: second string is empty" << std::endl;
	else if (t3 == "")
		std::cerr << "error: third string is empty" << std::endl;
	return 1;
}

void make_output(std::string buf, char **av)
{
	std::string temp = av[1];
	std::string outfile = temp + ".replace";
	std::ofstream ofs(outfile.c_str());
	ofs << buf;
	ofs.close();
}

void replacement(char **av)
{
	std::ifstream ifs(av[1]);
	std::string buf;
	std::string temp;
	char c;
	int len = strlen(av[2]);
	std::string temp2 = av[3];

	c = ifs.get();
	while (ifs.good())
	{
		buf += c;
		c = ifs.get();
	}
	ifs.close();
	for(size_t index = 0; index < buf.length(); index++)
	{
		if (buf.compare(index, len, av[2]) == 0)
		{
			buf.erase(index, len);
			buf.insert(index, av[3]);
			index += temp2.length();
		}
	}
	make_output(buf, av);
}

int main(int ac, char **av){
	std::string t1 = av[1];
	std::string t2 = av[2];
	std::string t3 = av[3];
	if (ac != 4)
		return (print_usage());
	if (t1 == "" || t2 == "" || t3 == "")
		return (empty_string(t1, t2, t3));
	replacement(av);
	return (0);
}