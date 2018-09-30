#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
    std::cout<< "New Weapon."<<std::endl;
    return;
}
Weapon::~Weapon()
{
    std::cout<< "Weapon "<<this->type<<" is destroyed."<<std::endl;
}
const std::string Weapon::getType()
{
    std::string &ref = this->type;
    return (ref);
}
void Weapon::setType(std::string newtype)
{
    this->type = newtype;
}
