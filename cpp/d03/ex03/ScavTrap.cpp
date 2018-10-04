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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor of ScavTrap called" << std::endl;
    this->type = "ScanTrap";
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
    this->setHit(obj.getHit());
    this->setName(obj.getName());
    this->setEnergy(obj.getEnergy());
    return (*this);
}

void ScavTrap::Chal1()
{
    std::cout << "ScavTrap " << this->getName() << " has Harlem Shake Challange" << std::endl;
}
void ScavTrap::Chal2()
{
    std::cout << "ScavTrap " << this->getName() << " has Chubby Bunny Challange" << std::endl;
}
void ScavTrap::Chal3()
{
    std::cout << "ScavTrap " << this->getName() << " has Cinnamon Challenge" << std::endl;
}
void ScavTrap::Chal4()
{
    std::cout << "ScavTrap " << this->getName() << " has Hot Pepper Challenge" << std::endl;
}
void ScavTrap::Chal5()
{
    std::cout << "ScavTrap " << this->getName() << " has Ice Bucket Challange" << std::endl;
}
void ScavTrap::challengeNewcomer()
{
    void (ScavTrap::*arr[5])(void) = {&ScavTrap::Chal1, &ScavTrap::Chal2, &ScavTrap::Chal3, &ScavTrap::Chal4,&ScavTrap::Chal5};
    int a = rand() % 5;
    (this->*arr[a])();
}