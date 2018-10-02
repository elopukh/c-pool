#include "Brain.hpp"
  
  Brain::Brain( )
    {
        return;
    }
   Brain::~Brain()
    {
        return;
    }
    void Brain::setBrain (std::string type, double neirons, double weight)
    {
        this->type = type;
        this->neirons = neirons;
        this->weight = weight;
    }
    std::string Brain::identify()
    {
        std::stringstream ss;
        ss << (const void *)this;
        std::string address = ss.str();
        return(address);
    }
