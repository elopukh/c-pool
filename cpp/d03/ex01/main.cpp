// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 11:45:15 by elopukh           #+#    #+#             //
//   Updated: 2018/10/04 11:45:16 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
     srand(time(0));
     ScavTrap obj("Katya");
     obj.challengeNewcomer();
    // std::string const target = "echufist";
    // obj.vaulthunter_dot_exe(target);
    // std::cout<< "Hit " << obj.getHit() <<"\nArmor "<< obj.getArmor() << std::endl;
    // std::cout<< "Take 100 damage "<<std::endl ;
    // obj.takeDamage(100);
    // std::cout<< "Take 10 damage "<<std::endl ;
    // obj.takeDamage(10);
    // std::cout<< "Hit " << obj.getHit() <<"\nArmor "<< obj.getArmor() << std::endl;
    // obj.beRepaired(2);
    // std::cout << "Get repared" << std::endl;
    // std::cout<< "Hit " << obj.getHit() << "\nEnergy " << obj.getEnergy() <<"\nArmor "<< obj.getArmor() << std::endl;

}