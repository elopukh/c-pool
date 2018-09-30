#include "Brain.hpp"
  
  Brain::Brain( )
    {
    }
   Brain::~Brain()
    {
    }
    void Brain::setBrain (std::string type, double neirons, double weight)
    {
        this->type = type;
        this->neirons = neirons;
        this->weight = weight;
    }
    std::string Brain::identify()
    {
        std::string a = "0x";
        std::string *b;
        *b = &this;

        return(a);
    }