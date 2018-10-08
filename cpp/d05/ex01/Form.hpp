// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 17:17:44 by elopukh           #+#    #+#             //
//   Updated: 2018/10/08 17:17:45 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const name;
        int const grade_sign;
        int const grade_exe;
        bool isSigned;
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
        Form(std::string const name, const int grade_sign, const int grade_exe);
        ~Form();
        Form(const Form &obj);
        Form & operator=(Form const & obj);
        std::string const getName() const;
        int getgrade_sign() const;
        int getgrade_exe() const;
        bool getisSigned();
        void beSigned(const Bureaucrat& b);
};
std::ostream& operator<<(std::ostream& os, const Form& b);

#endif