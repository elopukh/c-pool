// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 11:45:06 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 11:45:07 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
    private:
        int hit;
        unsigned int Maxhit;
        int Energy;
        unsigned int Maxenergy;
        unsigned int Level;
        std::string Name;
        unsigned int Melee;
        unsigned int Ranged;
        int armor;
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &obj);
        FragTrap & operator=(FragTrap const & obj);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
        void Atknife(std::string const & target);
        void Atfinger(std::string const & target);
        void Atsciossors(std::string const & target);
        void Atanecdot(std::string const & target);
        void Atstab(std::string const & target);
        int getHit() const;
        int getEnergy() const;
        std::string getName() const;
        int getArmor() const;

};

#endif