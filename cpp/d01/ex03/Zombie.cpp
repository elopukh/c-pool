#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
    std::cout << "Zombie " << this->name << " is new!" << std::endl;
}
Zombie::Zombie()
{
    std::cout << "Zombie is new!" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead!" << std::endl;
}
void Zombie::announce()
{
    std::cout << "< " << this->name << " " << this->type << " > " << " Braiiiiiiinnnssss..." << std::endl;
}
void Zombie::set_name(std::string name)
{
    this->name = name;
}