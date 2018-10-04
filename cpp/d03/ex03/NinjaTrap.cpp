#include "NinjaTrap.hpp"
NinjaTrap::NinjaTrap(std::string name) : 
ClapTrap(60, 60, 120, 120, 1, name, 60,5,0)
{
    std::cout << "NinjaTrap constructor called\n";
}
NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap destructor called\n";
}
NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
    std::cout << "Copy constructor NinjaTrap called" << std::endl;
    *this = obj;
}
NinjaTrap & NinjaTrap::operator=(NinjaTrap const & obj)
{
    std::cout << "Assignation operator NinjaTrap called" << std::endl;
    this->setHit(obj.getHit());
    this->setName(obj.getName());
    this->setEnergy(obj.getEnergy());
    return (*this);

}
void NinjaTrap::ninjaShoebox (FragTrap const &obj)
{
    std::cout << "Ooohh, I am gonna hit you, person "<< obj.getName()<<"<3\n";
   this->takeDamage(4);
}
void NinjaTrap::ninjaShoebox (ScavTrap const &obj)
{
    std::cout << "Ooohh, I am gonna hit you, person "<< obj.getName()<<" <3\n";
    this->takeDamage(3);
}
void NinjaTrap::ninjaShoebox (NinjaTrap const &obj)
{
    std::cout << "Ooohh, I am gonna hit you, person "<< obj.getName()<<" <3\n";
    this->takeDamage(5);
}