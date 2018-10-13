#include "py_list.h"

py_list::py_list(std::string str):
        m_str(str)
{}

std::string py_list::str()
{
    return m_str;
}

std::string py_list::repr()
{
    return m_str;
}