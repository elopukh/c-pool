// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:52:39 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 16:52:40 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : hit(100), Energy(100), Maxenergy(100), Name(name), Melee(30), Ranged(20), armor(5)
{
    std::cout << "Constructor of ScavTrap called" << std::endl;
    this->Level = 1;
    this->Maxhit = 100;
    return;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called" << std::endl;
    return;
}
ScavTrap::ScavTrap(const ScavTrap &obj)
 {
    std::cout << "Copy constructor of ScavTrap called" << std::endl;
    *this = obj;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
    std::cout << "Assignation operator  of ScavTrap called" << std::endl;
    this->hit = obj.getHit();
    this->Name = obj.getName();
    this->Energy = obj.getEnergy();
    return (*this);
}
void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "ScavTrap " << this->Name << " attacks " << target << " at melee, look !! It causing " <<this->Melee<< " points of damage !" << std::endl;
}
void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "ScavTrap " << this->Name << " attacks " << target << " at range, look !! It causing " <<this->Ranged<< " points of damage !" << std::endl;
}
void ScavTrap::Chal1()
{
    std::cout << "ScavTrap " << this->Name << " has Harlem Shake Challange" << std::endl;
}
void ScavTrap::Chal2()
{
    std::cout << "ScavTrap " << this->Name << " has Chubby Bunny Challange" << std::endl;
}
void ScavTrap::Chal3()
{
    std::cout << "ScavTrap " << this->Name << " has Cinnamon Challenge" << std::endl;
}
void ScavTrap::Chal4()
{
    std::cout << "ScavTrap " << this->Name << " has Hot Pepper Challenge" << std::endl;
}
void ScavTrap::Chal5()
{
    std::cout << "ScavTrap " << this->Name << " has Ice Bucket Challange" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    void (ScavTrap::*arr[5])(void) = {&ScavTrap::Chal1, &ScavTrap::Chal2, &ScavTrap::Chal3, &ScavTrap::Chal4,&ScavTrap::Chal5};
    int a = rand() % 5;
    (this->*arr[a])();
}
int ScavTrap::getHit() const
{
    return(this->hit);
}
int ScavTrap::getEnergy() const
{
    return(this->Energy);
}
std::string ScavTrap::getName() const
{
    return(this->Name);
}
int ScavTrap::getArmor() const
{
    return (this->armor);
}
