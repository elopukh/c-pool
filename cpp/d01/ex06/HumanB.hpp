#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *B_weap;
    std::string name;
    public:
    HumanB(std::string name, Weapon gun);
    HumanB(std::string name);
    void setWeapon(Weapon gun);
    ~HumanB();
    void attack();
};

#endif