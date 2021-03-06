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
        ~Fixed();
        Fixed(Fixed const &obj);
        Fixed& operator=(Fixed const & obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif