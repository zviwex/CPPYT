#include <string>

class py_list
{
private:
    std::string m_str;
public:
    py_list(std::string str);
    std::string str();
    std::string repr();
};