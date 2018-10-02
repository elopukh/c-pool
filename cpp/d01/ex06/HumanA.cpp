#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & gun) : A_weap(&gun), name(name)
{
    std::cout << "Human A "<< this->name << " is created! " << std::endl;
    return ;
}
HumanA::~HumanA()
{
    std::cout << "Human A "<< this->name << " is dead! " << std::endl;
}
void HumanA::attack()
{
    std::cout << this->name <<" attacks with his "<< this->A_weap->getType()<< std::endl;
}