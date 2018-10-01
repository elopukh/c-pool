#include "Book.hpp"

void searchcont(Book contact[], int size)
{
    int j;
    std::cout << std::setw( 10 ) << std::right << "Index" << "|"
                        << std::setw( 10 ) << "First name"<< "|"
                        << std::setw( 10 ) << "Last name"<< "|"
                        << std::setw( 10 ) << "Nickname"<< "|"
                        << std::endl;
    for (int i = 0; i < size; i++)
        contact[i].check(i);
    std::cout << "Enter index" << std::endl;
    std::cin >>j;
    if (std::cin.good() && j >= 0 && j < size)
    {
         contact[j].get_all();
    }
    else
    {
        std::cin.clear();
        std::cout << "NO, enter number from 0 to " << size - 1 << std::endl;
    }
}

void add_cont(Book contact[], int size)
{
    std::string first_name1;
                        std::string last_name1;
                        std::string nickname1;
                        std::string login1;
                        std::string postal1;
                        std::string email1;
                        std::string phone1;
                        std::string birthday1;
                        std::string meal1;
                        std::string underwear1;
                        std::string secret1;

    std::cout << "First name:";
    std::cin >> first_name1;
    std::cout << "Last name:";
    std::cin >> last_name1;
    std::cout << "nickname:";
    std::cin >> nickname1;
    std::cout << "login:";
    std::cin >> login1;
    std::cout << "postal address:";
    std::cin >> postal1;
    std::cout << "email address:";
    std::cin >> email1;
    std::cout << "phone number:";
    std::cin >> phone1;
    std::cout << "birthday date:";
    std::cin >> birthday1;
    std::cout << "favorite meal:";
    std::cin >> meal1;
    std::cout << "underwear color:";
    std::cin >> underwear1;
    std::cout << "darkest secret:";
    std::cin >> secret1;
    contact[size].set_contact(first_name1,last_name1,nickname1,login1,postal1,email1,phone1,birthday1,meal1,underwear1,secret1);
}

int main()
{
    int size = 0;
    std::string mystr;
    Book contact[8];
    std::cout << "Enter ADD | SEARCH | EXIT" << std::endl;
    getline(std::cin, mystr);
    while (mystr != "EXIT")
    {
        if (mystr == "ADD")
        {
            if (size < 8)
            {
                add_cont(contact, size);
                size++;
            }
            else
            std::cout << "PhoneBook is full!" << std::endl;
        }
        else if (mystr == "SEARCH")
        {
            if (size > 0)
                searchcont(contact, size);
            else 
                std::cout << "Nothing to search :(" << std::endl;
        }
        else
            std::cout << "usage: ADD | SEARCH | EXIT" << std::endl;
        getline(std::cin, mystr);
    }
    return (0);
}
