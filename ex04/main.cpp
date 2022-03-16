#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "input: ./replace filename before_word after_word" << std::endl;
		return (1);
	}

	std::string	file = argv[1];
	std::ifstream	fin;
	std::ofstream	fout;

	file.append(".replace");
	fin.open(argv[1]);
	if (fin.fail())
	{
		std::cout << "CANNOT FIND THE FILE: '" << argv[1] << "'" << std::endl;
		return (1);
	}
	fout.open(file);
	if (fout.fail())
	{
		std::cout << "CANNOT OPEN THE FILE: '" << file << "'" << std::endl;
		return (1);
	}

	std::string	word;

	do
	{
		std::getline(fin, word);
		while (1)
		{
			size_t	count;
			count = word.find(argv[2]);

			if (count == std::string::npos)
			{
				fout << word;
				break ;
			}
			fout << word.substr(0, count) << argv[3];
			word = word.substr(std::strlen(argv[2]) + count);
		}
		if (fin.eof())
			break ;
		fout << std::endl;
	}
	while (1);
	fin.close();
	fout.close();
	
	return (0);
}