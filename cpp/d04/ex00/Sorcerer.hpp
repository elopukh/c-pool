// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 14:58:23 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 14:58:24 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"
class Sorcerer
{
    private:
        std::string name;
        std::string title;
    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer();
        Sorcerer(const Sorcerer &obj);
        Sorcerer & operator=(Sorcerer const & obj);
        std::string getName() const;
        std::string getTitle() const;
        virtual void polymorph(Victim const &) const;

};
        std::ostream& operator<<(std::ostream &s,Sorcerer const & obj);
#endif