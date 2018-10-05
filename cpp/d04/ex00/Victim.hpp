// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 14:59:15 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 14:59:16 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
class Victim
{
    private:
    std::string name;
    public:
    Victim(std::string name);
    Victim();
    ~Victim();
    Victim(const Victim &obj);
    Victim & operator=(Victim const & obj);
    std::string getName() const;
    void setName(std::string name); 
    virtual void getPolymorphed() const;

};
std::ostream& operator<<(std::ostream &s, Victim const & obj);
#endif