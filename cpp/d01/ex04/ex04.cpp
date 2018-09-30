#include <iostream>

int main() 
{
    std::string a = "HI THIS IS BRAIN";
    std::string *pstr = &a;
    std::string refstr = a;
    std::cout << "pointer " << *pstr << "\n" << "reference " << refstr << std::endl;
    return (0);
}