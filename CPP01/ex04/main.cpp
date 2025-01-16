
#include <iostream>
#include <string>
#include <fstream>


std::string toReplace(std::string line, const std::string& search, const std::string& replace)
{
	size_t searchLen = search.length();
	size_t replaceLen = replace.length();
	size_t posiSearch = 0;

	posiSearch = line.find(search);
	while (posiSearch != std::string::npos)
	{
		line.erase(posiSearch, searchLen);
		line.insert(posiSearch, replace);
		posiSearch = line.find(search, posiSearch + replaceLen);
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments." << std::endl <<
		"Usage:\t ./Sed [filename] [toFind] [toReplace]" << std::endl;
		return 1;
	}
	else
	{
		const std::string inputFile = argv[1];
		const std::string search = argv[2];
		const std::string replace = argv[3];
		std::string outputFile = inputFile + ".replace";
		std::ifstream inFile;
		std::ofstream outFile;
		std::string line;

		inFile.open(argv[1]);
		if (inFile.is_open())
		{
			outFile.open(outputFile.c_str(), std::ios::out | std::ios::trunc);
			if (outFile.is_open())
			{
				while (std::getline(inFile, line))
				{
					line = toReplace(line, search, replace);
					outFile << line;
					if (!inFile.eof())
						outFile << std::endl;
				}
				outFile.close();
			}
			else
			{
				std::perror("Outfile Error");
				inFile.close();
				return (1);
			}
			inFile.close();
		}
		else
		{
			std::cout << "Error: Could not open the file." << std::endl;
			return (1);
		}
		return (0);
	}
	return (1);
}
