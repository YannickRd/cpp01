// 42 header to be added here!

#include "main.hpp"

void	reading_file(std::string& temp_buffer, std::ifstream& ifs)
{
	std::string line;

	while (std::getline(ifs, line))
	{
		temp_buffer += line;
		if (!ifs.eof())
			temp_buffer += '\n';
	}
}

void	replace_s1_w_s2(std::string& temp_buffer, std::string s1, std::string s2)
{
	size_t pos;

	while ((pos = temp_buffer.find(s1)) != std::string::npos)
	{
		temp_buffer.erase(pos, s1.length());
		temp_buffer.insert(pos, s2);
	}
}
