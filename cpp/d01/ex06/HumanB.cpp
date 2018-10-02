#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon gun)
{
    this->name = name;
    this->B_weap = &gun;
    std::cout << "Human B "<< this->name << " is created! " << std::endl;
    return ;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "Human B "<< this->name << " is created! " << std::endl;
    return ;
}
HumanB::~HumanB()
{
    std::cout << "Human B "<< this->name << " is dead! " << std::endl;
}
void HumanB::attack()
{
    std::cout << this->name <<" attacks with his "<< this->B_weap->getType()<< std::endl;
}
void HumanB::setWeapon(Weapon gun)
{
    this->B_weap = &gun;
}