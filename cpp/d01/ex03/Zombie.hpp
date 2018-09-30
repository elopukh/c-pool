#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
        std::string name;
        std::string type;
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();
        void set_name(std::string name);
        void announce();
};

 #endif