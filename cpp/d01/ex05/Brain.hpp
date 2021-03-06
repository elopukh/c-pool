#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
    private:
    std::string type;
    double neirons;
    double weight;
    public:
    Brain();
    ~Brain();
    void setBrain (std::string type, double neirons, double weight);
    std::string identify();
};

#endif