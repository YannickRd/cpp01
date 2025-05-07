// 42 header to be added here!

#include "main.hpp"

int main(int argc, char* argv[])
{
    exit_if_args_errors(argc, argv);
    std::string     file_name = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::ifstream   ifs(file_name.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Error: Could not open file " << file_name << std::endl;
        return (3);
    }
    std::string     temp_buffer;
    std::string     line;
    while(std::getline(ifs, line))
    {
        temp_buffer += line;
        if (!ifs.eof())
            temp_buffer += '\n';
    }
    ifs.close();
    size_t          pos;
    while ((pos = temp_buffer.find(s1)) != std::string::npos)
    {
        temp_buffer.erase(pos, s1.length());
        temp_buffer.insert(pos, s2);
    }
    std::ofstream   ofs(file_name.c_str()); 
    ofs << temp_buffer;
    ofs.close();
    return (0);
}