#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
class Pony
{
    private:
        std::string name;
        std::string colour;
        double height;
    public:
        Pony();
        Pony(std::string name, double height, std::string colour);
        ~Pony();
        void get_pony();

};

#endif