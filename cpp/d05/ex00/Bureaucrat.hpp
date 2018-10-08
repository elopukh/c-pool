// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:43:09 by elopukh           #+#    #+#             //
//   Updated: 2018/10/08 13:43:09 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        class GradeTooHighException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "Grade is Too High!\n";
            }
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "Grade is Too Low!\n";
            }
        };
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat & operator=(Bureaucrat const & obj);
        std::string const getName() const;
        void increment();
        void decrement();
        int getGrade() const;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) ;

#endif