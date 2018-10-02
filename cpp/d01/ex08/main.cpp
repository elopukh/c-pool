// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:09:04 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 19:09:05 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Human.hpp"

int main()
{
    Human obj;
    std::string const name  = "ranged";
    std::string const target = "Katya";
    obj.action(name, target);    
}