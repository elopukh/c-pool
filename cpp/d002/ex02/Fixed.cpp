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
float Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->val);
}
void Fixed::setRawBits( int const raw )
{
    this->val = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
bool Fixed::operator>(Fixed const & a)
{
    return(this->val > a.val);
}
bool Fixed::operator<(Fixed const & a)
{
    return(this->val < a.val);
}
bool Fixed::operator>=(Fixed const & a)
{
    return(this->val >= a.val);
}
bool Fixed::operator<=(Fixed const & a)
{
    return(this->val <= a.val);
}
bool Fixed::operator==(Fixed const & a)
{
    return(this->val == a.val);
}
bool Fixed::operator!=(Fixed const & a)
{
    return(this->val != a.val);
}
Fixed& Fixed::operator+(Fixed const & a)
{
    this->val = this->val + a.val;
    return(*this);
}
Fixed& Fixed::operator-(Fixed const & a)
{
    this->val = this->val - a.val;
    return(*this);
}
Fixed& Fixed::operator*(Fixed const & a)
{
    int c = this->val * a.val;
    if(c/a.val != this->val)
    {
        int i1 = this->val/1024;
        int i2 = a.val/1024;
        int f1 = (this->val&(1023));
        int f2 = (this->val&(1023));
        this->val = (i1*i2)*1024+(float)(f1*f2)/1024+i1*f2+i2*f1;
        return (*this);
    }
    else
    {
        this->val = c/1024;
        return (*this);
    }
}
    Fixed& Fixed::operator/(Fixed const & a)
    {
        if(this->val > (1<<21))
        {
            signed int i = this->val / 1024;
            signed int f = (this->val&(1023));
            this->val = ((i*1024)/this->val)*1024+(f*1024)/this->val;
            return (*this);
        }
        else
        {
            this->val = (this->val * 1024)/a.val;
            return (*this);
        }
    }
    Fixed Fixed::operator++(int)
    {
        Fixed temp = *this;  
        ++*this;  
        return temp; 
    }
    Fixed& Fixed::operator++()
    {
        this->val++;
        return(*this);
    }
    Fixed Fixed::operator--(int)
    {
        
        Fixed temp = *this;  
        --*this;  
        return temp; 
    }
    Fixed& Fixed::operator--()
    {
        this->val--;
        return(*this);
    }
    Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
    {
        return (a.getRawBits() < b.getRawBits() ? a : b);
    }
    Fixed& Fixed::min(Fixed &a, Fixed &b)
    {
        return (a.getRawBits() < b.getRawBits() ? a : b);
    }
    Fixed  const & Fixed::max(Fixed const &a, Fixed const &b)
    {
        return (a.getRawBits()> b.getRawBits() ? a : b);
    }
    Fixed& Fixed::max(Fixed &a, Fixed &b)
    {
        return (a.getRawBits() > b.getRawBits() ? a : b);
    }