// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:16:16 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 19:16:17 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Logger.hpp"

int main()
{
    Logger obj;
    obj.setFilename("newfile.txt");
    std::string const mas  = "Oh my God, I did it!!!!!!";
    std::string const dest  = "console";
    obj.log(dest, mas);
}