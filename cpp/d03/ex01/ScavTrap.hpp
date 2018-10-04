// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 16:52:34 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 16:52:34 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
class ScavTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &obj);
        ScavTrap & operator=(ScavTrap const & obj);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer();
        void Chal1();
        void Chal2();
        void Chal3();
        void Chal4();
        void Chal5();
        int getHit() const;
        int getEnergy() const;
        std::string getName() const;
        int getArmor() const;
};

#endif