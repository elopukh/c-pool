// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 14:59:02 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 14:59:03 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name) , title(title)
{
    std::cout << this->name <<", "<< this->title<<", is born !" << std::endl;
}
Sorcerer::~Sorcerer()
{
    std::cout << this->name <<", "<< this->title<<" ,is dead. Consequences will never be the same !" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &obj)
{
    *this = obj;
}
std::string Sorcerer::getName() const
{
    return(this->name);
}
std::string Sorcerer::getTitle() const
{
    return(this->title);
}
Sorcerer & Sorcerer::operator=(Sorcerer const & obj)
{
    this->name = obj.getName();
    this->title = obj.getTitle();
    return (*this);
}
std::ostream& operator<<(std::ostream &s, Sorcerer const & obj)
{
    s << "I am " << obj.getName() <<", "<< obj.getTitle()<<", and I like ponies !\n";
    return (s);
}
void Sorcerer::polymorph(Victim const &obj) const
{
    obj.getPolymorphed();
}