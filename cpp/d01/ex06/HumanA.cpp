#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & gun) : A_weap(&gun), name(name)
{
    return ;
}
HumanA::~HumanA()
{

}
void HumanA::attack()
{
    std::cout << this->name <<" attacks with his "<< this->A_weap->getType()<< std::endl;
}