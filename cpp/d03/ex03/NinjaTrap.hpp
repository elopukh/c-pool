#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();
        NinjaTrap(const NinjaTrap &obj);
        NinjaTrap & operator=(NinjaTrap const & obj);
        void ninjaShoebox (FragTrap const &obj);
        void ninjaShoebox (ScavTrap const &obj);
        void ninjaShoebox (NinjaTrap const &obj);
};

#endif