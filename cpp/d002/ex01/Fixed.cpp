// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:24:01 by elopukh           #+#    #+#             //
//   Updated: 2018/10/03 12:24:01 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : val(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const int nval)
{
    this->val = nval * 1024;
}
Fixed::Fixed(const float nval)
{
    this->val = (int)(nval * 1024);
}
float Fixed::toFloat( void ) const
{
    return (((float)this->val)/1024);
}
int Fixed::toInt( void ) const
{
    return (((signed int)this->val)/1024);
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
std::ostream& operator<<(std::ostream &s, Fixed const & obj)
{
    s << obj.toFloat();
    return (s);
}
Fixed & Fixed::operator=(Fixed const & obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->val = obj.getRawBits();
    return (*this);
}
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->val);
}
void Fixed::setRawBits( int const raw )
{
    this->val = raw;
    std::cout << "setRawBits member function called" << std::endl;
}