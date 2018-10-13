#include "py_parse.h"

std::string keywords[] = {
    "for", 
    "while"
};

void py_parse::parse_line(std::string line)
{
    std::istringstream iss(line);
    std::string token;
    while (std::getline(iss, token, ' '))
    {
        for(std::string keyword: m_keywords)
        {
            if(token == keyword)
            {
                std::cout << "|" << token << "|" << std::endl;

            }
        }
        // m_curr_indent_level++;
    }
}

void py_parse::run()
{
    std::string line;
    while(getline(m_file, line)) {
        parse_line(line);
    }
}

py_parse::py_parse(std::string file_name):
    m_file_name(file_name)
{
    m_file.open(m_file_name.c_str(),  std::ifstream::in);
    py_parse();
    
}

py_parse::~py_parse()
{
    m_file.close();
    
}

py_parse::py_parse()
{
    m_curr_indent_level = 0;
}

py_parse::py_parse(std::ifstream file)
{
    py_parse();
    UNUSED(file);
    std::cout << "Not implemented";
    exit(2);
}
