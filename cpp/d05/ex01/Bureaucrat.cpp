// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/08 13:43:13 by elopukh           #+#    #+#             //
//   Updated: 2018/10/08 13:43:14 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
    (void)obj;
    return (*this);
}
Bureaucrat::~Bureaucrat()
{

}
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else 
        this->grade = grade;
}
void Bureaucrat::signForm(std::string s) const
{
    std::cout << s << std::endl;
}
const std::string Bureaucrat::getName()const
{
    return(this->name);
}
void Bureaucrat::increment()
{ 
    if (this->grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else 
        this->grade--;
}
void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else 
        this->grade++;
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{  
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return os;  
} 
