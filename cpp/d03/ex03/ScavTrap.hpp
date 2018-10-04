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
#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &obj);
        ScavTrap & operator=(ScavTrap const & obj);
        void challengeNewcomer();
        void Chal1();
        void Chal2();
        void Chal3();
        void Chal4();
        void Chal5();
};

#endif