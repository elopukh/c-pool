#ifndef BOOK_HPP
# define BOOK_HPP
#include <string>
#include <iomanip>
#include <iostream>

class Book {

private:
 std::string first_name,last_name,nickname,login,postal,email,phone, birthday,meal,underwear, secret;
public:
    Book(void);
    ~Book(void);
    void set_contact(std::string first_name, std::string last_name, std::string nickname, std::string login,
    std::string postal,std::string email,std::string phone,std::string  birthday,std::string meal,std::string underwear,std::string secret);
    void get_contact(int i);
    void get_all();
    void check(int i);
};

#endif