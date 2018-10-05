// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:07:26 by elopukh           #+#    #+#             //
//   Updated: 2018/10/05 15:07:27 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
int main()
{
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
        return 0;
}