#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
    Weapon *A_weap;
    std::string name;
    public:
    HumanA(std::string name, Weapon &gun);
    ~HumanA();
    void attack();
};

#endif