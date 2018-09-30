#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    std::cout << "ZombieEvent constructor called" << std::endl;
}
ZombieEvent::~ZombieEvent()
{
    std::cout << "ZombieEvent destructor called" << std::endl;
}
void ZombieEvent::setZombieType(std::string type)
{
    this->stype = type;
}
Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* badboy = new Zombie(name, this->stype);
    return (badboy);
}