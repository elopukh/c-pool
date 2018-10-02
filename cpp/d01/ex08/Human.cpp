// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:09:34 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 19:09:35 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "It is meleeAttack with "<< target << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
    std::cout << "It is rangedAttack with "<< target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
    std::cout << "It is intimidatingShout with "<< target << std::endl;
}
void Human::action(std::string const & action_name, std::string const & target)
{
   void (Human::*arr[3])(const std::string &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
   std::string names[] = {"melee", "ranged", "intimidating"};
   for(int i = 0; i < 3; i++)
   {
       if (action_name == names[i])
       {
            (this->*arr[i])(target);
            return;
       }
   }
}