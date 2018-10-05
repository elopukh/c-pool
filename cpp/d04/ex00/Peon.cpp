// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:07:16 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 15:07:17 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string name1) : Victim(name1)
{
    std::cout << "Zog zog.\n";
}
Peon::~Peon()
{
 std::cout << "Bleuark...\n";
}
Peon::Peon(const Peon &obj)
{
    *this = obj;
}
Peon & Peon::operator=(Peon const & obj)
{
    this->setName(obj.getName());
    return (*this);
}
void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony !\n";
}