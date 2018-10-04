// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:23:54 by elopukh           #+#    #+#             //
//   Updated: 2018/10/03 12:23:55 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
    private:
        int val;
        static const int nub_bit;
    public:
        Fixed();
        Fixed(const int nval);
        Fixed(const float nval);
        ~Fixed();
        Fixed(Fixed const &obj);
        float getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(Fixed const & obj);
        bool operator>(Fixed const & a);
        bool operator<(Fixed const & a);
        bool operator>=(Fixed const & a);
        bool operator<=(Fixed const & a);
        bool operator==(Fixed const & a);
        bool operator!=(Fixed const & a);
        Fixed& operator+(Fixed const & a);
        Fixed& operator-(Fixed const & a);
        Fixed& operator*(Fixed const & a);
        Fixed& operator/(Fixed const & a);
        Fixed operator++(int);
        Fixed& operator++();
        Fixed operator--(int);
        Fixed& operator--();
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed& max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream &s,Fixed const & obj);

#endif