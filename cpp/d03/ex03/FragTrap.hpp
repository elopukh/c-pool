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
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &obj);
        FragTrap & operator=(FragTrap const & obj);
        void vaulthunter_dot_exe(std::string const & target);
        void Atknife(std::string const & target);
        void Atfinger(std::string const & target);
        void Atsciossors(std::string const & target);
        void Atanecdot(std::string const & target);
        void Atstab(std::string const & target);
};

#endif