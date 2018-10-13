#include "common.h"


class py_parse
{
private:
    std::string m_file_name;
    std::ifstream m_file;
    size_t m_curr_indent_level;
    std::vector<std::string> m_keywords = {"for", "while"};
    void parse_line(std::string line);

public:
    void run();
    py_parse(std::string file_name);
    py_parse(std::ifstream file);
    py_parse();
    ~py_parse();

};