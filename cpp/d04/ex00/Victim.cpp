// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 14:59:20 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 14:59:20 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Victim.hpp"

    Victim::Victim(std::string name) : name(name)
    {
        std::cout << "Some random victim called "<< this->name <<" just popped !\n" << std::endl;
    }
    Victim::~Victim()
    {
        std::cout << "Victim "<< this->name << " just died for no apparent reason !\n";
    }
    Victim::Victim(const Victim &obj)
    {
        *this = obj;
    }
    Victim::Victim()
    {
        return;
    }
    Victim & Victim::operator=(Victim const & obj)
    {
        this->name = obj.getName();
        return (*this);
    }
    std::string Victim::getName() const
    {
        return(this->name);
    }
    void Victim::getPolymorphed() const
    {
        std::cout << this->name <<" has been turned into a cute little sheep !\n";
    }
    std::ostream& operator<<(std::ostream &s, Victim const & obj)
    {
        s << "I am " << obj.getName() << "and I like otters !\n";
        return (s);
    }
    void Victim::setName(std::string name)
    {
        this->name = name;
    }
