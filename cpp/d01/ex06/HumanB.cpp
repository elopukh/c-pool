#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon gun)
{
    this->name = name;
    this->B_weap = &gun;
}
HumanB::~HumanB()
{

}
void HumanB::attack()
{
    std::cout << this->name <<" attacks with his "<< this->B_weap->getType()<< std::endl;
}