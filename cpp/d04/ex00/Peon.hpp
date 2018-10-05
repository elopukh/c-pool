// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 14:59:31 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 14:59:31 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string name);
        ~Peon();
        Peon(const Peon &obj);
        Peon & operator=(Peon const & obj);
        virtual void getPolymorphed() const;
};
#endif