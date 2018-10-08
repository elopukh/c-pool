// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:43:24 by elopukh           #+#    #+#             //
//   Updated: 2018/10/08 13:43:25 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("Bob",150);
    std::cout << a << std::endl;
    try
    {  
        a.decrement();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0);
}