// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 17:15:32 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 17:15:33 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap 
{
    private:
        int hit;
        int Maxhit;
        int Energy;
        int Maxenergy;
        int Level;
        std::string Name;
        int Melee;
        int Ranged;
        int armor;
    public:
        ClapTrap(int hit, int Maxhit, int Energy , int Maxenergy , int level ,std::string name, int Melee,int Ranged,int armor);
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap & operator=(ClapTrap const & obj);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getHit() const;
        int getEnergy() const;
        std::string getName() const;
        std::string type;
        int getArmor() const;
        void plusEnergy(int val);
        void setEnergy(int val);
        void setHit(int val);
        void setName(std::string val);
};

#endif
