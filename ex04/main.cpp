// 42 header to be added here!

#include "main.hpp"

int main(int argc, char *argv[])
{
	exit_if_args_errors(argc, argv);
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	exit_if_empty_arg(s1);
	std::string s2 = argv[3];
	std::ifstream ifs(file_name.c_str());
	exit_if_cannot_open_in(file_name, ifs);
	std::string temp_buffer;
	reading_file(temp_buffer, ifs);
	ifs.close();
	replace_s1_w_s2(temp_buffer, s1, s2);
	std::string outfile_name = file_name + ".replace";
	std::ofstream ofs(outfile_name.c_str());
	exit_if_cannot_open_out(ofs);
	ofs << temp_buffer;
	ofs.close();
	return (0);
}
