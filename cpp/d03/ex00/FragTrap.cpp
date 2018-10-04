// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 11:44:59 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 11:44:59 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : hit(100), Energy(100), Maxenergy(100), Name(name), Melee(30), Ranged(20), armor(5)
{
    std::cout << "Constructor called" << std::endl;
    this->Level = 1;
    this->Maxhit = 100;
    return;
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
    return;
}
FragTrap::FragTrap(const FragTrap &obj)
 {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->hit = obj.getHit();
    this->Name = obj.getName();
    this->Energy = obj.getEnergy();
    return (*this);
}
void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing " <<this->Melee<< " points of damage !" << std::endl;
}
void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing " <<this->Ranged<< " points of damage !" << std::endl;
}
void FragTrap::Atknife(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " with knife, causing " <<this->Ranged<< " points of damage !" << std::endl;
}
void FragTrap::Atfinger(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " with finger, causing " << 50 << " points of damage !" << std::endl;
}
void FragTrap::Atsciossors(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " with sciossors, causing " << 20 << " points of damage !" << std::endl;
}
void FragTrap::Atanecdot(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " with anecdot, causing " << 100 << " points of damage !" << std::endl;
}
void FragTrap::Atstab(std::string const & target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " stabbing, causing " << 2 << " points of damage !" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
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
void FragTrap::beRepaired(unsigned int amount)
{
    this->armor = 5;
    if (this->Energy <= (int)(this->Maxenergy - amount))
        this->Energy += amount;
}
void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->Energy >= 25)
        this->Energy -= 25;
    else
    {
        std::cout << "Not enough Energy!";
        return;
    }
    void (FragTrap::*arr[5])(const std::string &) = {&FragTrap::Atstab, &FragTrap::Atanecdot, &FragTrap::Atfinger, &FragTrap::Atknife,&FragTrap::Atsciossors};
    int a = rand() % 5;
    (this->*arr[a])(target);
}
int FragTrap::getHit() const
{
    return(this->hit);
}
int FragTrap::getEnergy() const
{
    return(this->Energy);
}
std::string FragTrap::getName() const
{
    return(this->Name);
}
int FragTrap::getArmor() const
{
    return (this->armor);
}
