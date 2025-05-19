// 42 header to be added here!

#ifndef MAIN_HPP
# define MAIN_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

void	exit_if_args_errors(int argc, char* argv[]);
void	exit_if_empty_arg(std::string s1);
void	exit_if_cannot_open_in(std::string file_name, std::ifstream& ifs);
void	reading_file(std::string& temp_buffer, std::ifstream& ifs);
void	replace_s1_w_s2(std::string& temp_buffer, std::string s1, std::string s2);
void	exit_if_cannot_open_out(std::ofstream& ofs);

# endif
