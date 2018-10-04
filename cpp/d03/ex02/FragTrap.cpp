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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap called" << std::endl;
    this->type = "FragTrap";
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
    return;
}
FragTrap::FragTrap(const FragTrap &obj)
 {
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = obj;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
    std::cout << "Assignation operator FragTrap called" << std::endl;
    this->setHit(obj.getHit());
    this->setName(obj.getName());
    this->setEnergy(obj.getEnergy());
    return (*this);
}
void FragTrap::Atknife(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with knife, causing " <<2<< " points of damage !" << std::endl;
}
void FragTrap::Atfinger(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with finger, causing " << 50 << " points of damage !" << std::endl;
}
void FragTrap::Atsciossors(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with sciossors, causing " << 20 << " points of damage !" << std::endl;
}
void FragTrap::Atanecdot(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with anecdot, causing " << 100 << " points of damage !" << std::endl;
}
void FragTrap::Atstab(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " stabbing, causing " << 2 << " points of damage !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->getEnergy() >= 25)
        this->plusEnergy(-25);
    else
    {
        std::cout << "Not enough Energy!";
        return;
    }
    void (FragTrap::*arr[5])(const std::string &) = {&FragTrap::Atstab, &FragTrap::Atanecdot, &FragTrap::Atfinger, &FragTrap::Atknife,&FragTrap::Atsciossors};
    int a = rand() % 5;
    (this->*arr[a])(target);
}

