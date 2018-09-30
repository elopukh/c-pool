#include "Book.hpp"

Book::Book(void)
{return;}

Book::~Book(void)
{return;}

void Book::set_contact( std::string first_name1,
                        std::string last_name1,
                        std::string nickname1,
                        std::string login1,
                        std::string postal1,
                        std::string email1,
                        std::string phone1,
                        std::string birthday1,
                        std::string meal1,
                        std::string underwear1,
                        std::string secret1)
{
        first_name = first_name1;
        last_name = last_name1;
        nickname = nickname1;
        login = login1;
        postal = postal1;
        email = email1;
        phone = phone1;
        birthday = birthday1;
        meal = meal1;
        underwear = underwear1;
        secret = secret1;
}


void Book::check(int i)
{
    if (first_name.length() > 10)
    {
        first_name = first_name.substr(0,9);
        first_name += ".";
    }
    if (last_name.length() > 10)
    {
        last_name = last_name.substr(0,9);
        last_name += ".";
    }
    if (nickname.length() > 10)
    {
        nickname = nickname.substr(0,9);
        nickname += ".";
    }
    this->get_contact(i);
}

void Book::get_contact(int i)
{
    std::cout << std::setw( 10) << std::right << i << "|"
                        << std::setw(10) << first_name<< "|"
                        << std::setw(10) << last_name<< "|"
                        << std::setw(10) << nickname<< "|"
                        << std::endl;
}

void Book::get_all()
{
    std::cout << "First name: ";
    std::cout << first_name << std::endl;
    std::cout << "Last name: ";
    std::cout << last_name << std::endl;
    std::cout << "nickname: ";
    std::cout << nickname << std::endl;
    std::cout << "login: ";
    std::cout << login << std::endl;
    std::cout << "postal address: ";
    std::cout << postal << std::endl;
    std::cout << "email address: ";
    std::cout << email << std::endl;
    std::cout << "phone number: ";
    std::cout << phone << std::endl;
    std::cout << "birthday date: ";
    std::cout << birthday << std::endl;
    std::cout << "favorite meal: ";
    std::cout << meal << std::endl;
    std::cout << "underwear color: ";
    std::cout << underwear << std::endl;
    std::cout << "darkest secret: ";
    std::cout << secret << std::endl;
}