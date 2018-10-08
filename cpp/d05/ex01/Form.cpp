// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 17:17:22 by elopukh           #+#    #+#             //
//   Updated: 2018/10/08 17:17:23 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Form.hpp"

Form::Form(const Form &obj): name(obj.getName()) , grade_sign(obj.getgrade_sign()), grade_exe(obj.getgrade_exe())
{
    *this = obj;
}
Form & Form::operator=(Form const & obj)
{
    (void)obj;
    return (*this);
}
Form::~Form()
{

}
Form::Form(std::string const name, int const grade_sign, const int grade_exe) : name(name) , grade_sign(grade_sign), grade_exe(grade_exe)
{
    this->isSigned = 0;
    if (grade_sign < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade_sign > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if (grade_exe < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade_exe > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

const std::string Form::getName()const
{
    return(this->name);
}
int Form::getgrade_sign() const
{
    return (this->grade_sign);
}
int Form::getgrade_exe() const
{
    return (this->grade_exe);
}
bool Form::getisSigned()
{
    return (this->isSigned);
}
std::ostream& operator<<(std::ostream& os, const Form& b)
{  
    os << b.getName() << ", Form grade required to sign it is " << b.getgrade_sign() << " and a grade required to execute it is "<< b.getgrade_exe()<<std::endl;
    return os;  
}
void Form::beSigned(const Bureaucrat& b)
{
    std::string s = b.getName();
    if (b.getGrade()>= this->grade_sign)
    {
        s+= " cannot sign ";
        s += this->name;
        s += " because Grade Too Low!";
        throw Form::GradeTooLowException();
        b.signForm(s);
    }
    else 
    {
        if (this->isSigned)
            {
                s+= " cannot sign ";
                s += this->name;
                s += " because it is already signed!";
            }
        else
        {
            s+= " signs ";
            s += this->name;
            this->isSigned = true;
            b.signForm(s);
        } 
    }

}
