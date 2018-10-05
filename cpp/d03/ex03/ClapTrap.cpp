// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 17:15:24 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 17:15:24 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : hit(100), Energy(100), Maxenergy(100), Name(name), Melee(30), Ranged(20), armor(5)
{
    std::cout << "Constructor of ClapTrap called" << std::endl;
    this->Level = 1;
    this->Maxhit = 100;
    return;
}
ClapTrap::ClapTrap(int hit, int Maxhit, int Energy , int Maxenergy , int level ,std::string name, int Melee,int Ranged,int armor)
{
    this->hit = hit;
    this->Maxhit = Maxhit;
    this->Energy = Energy;
    this->Maxenergy = Maxenergy;
    this->Level = level;
    this->Name = name;
    this->Melee = Melee;
    this->Ranged = Ranged;
    this->armor = armor;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of ClapTrap called" << std::endl;
}
ClapTrap::ClapTrap()
{

}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = obj;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj)
{
    std::cout << "Assignation operator ClapTrap called" << std::endl;
    this->setHit(obj.getHit());
    this->setName(obj.getName());
    this->setEnergy(obj.getEnergy());
    return (*this);
}
void ClapTrap::takeDamage(unsigned int amount)
{
    int num;
    num = this->hit - amount;
    if (num < 0)
    {
        std::cout << "Hit points fell under 0. Stop, please.";
        return ;
    }
    else
    {
        if (this->armor > 0)
        {
            this->armor -= (int)amount;
            if (this->armor <= 0)
            {
                this->hit += this->armor;
                this->armor = 0;
            }
        }
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    this->armor = 5;
    if (this->Energy <= (int)(this->Maxenergy - amount))
        this->Energy += amount;
}
int ClapTrap::getHit() const
{
    return(this->hit);
}
int ClapTrap::getEnergy() const
{
    return(this->Energy);
}
std::string ClapTrap::getName() const
{
    return(this->Name);
}
int ClapTrap::getArmor() const
{
    return (this->armor);
}
void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << this->type << "  " << this->Name << " attacks " << target << " at melee, look !! It causing " <<this->Melee<< " points of damage !" << std::endl;
}
void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << this->type << "  " << this->Name << " attacks " << target << " at range, look !! It causing " <<this->Ranged<< " points of damage !" << std::endl;
}
void ClapTrap::plusEnergy(int val)
{
    this->Energy += val;
}
void ClapTrap::setHit(int val)
{
    this->hit = val;
}
void ClapTrap::setEnergy(int val)
{
    this->Energy = val;
}
void ClapTrap::setName(std::string val)
{
    this->Name = val;
}