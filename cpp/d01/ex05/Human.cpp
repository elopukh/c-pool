#include "Human.hpp"

Human::Human(void)
{
    return ;
}
Human::~Human(void)
{
    return ;
}

Brain Human::getBrain(void)
{
    return (this->brains);
}

std::string Human::identify(void)
{
    return (this->brains.identify());
}