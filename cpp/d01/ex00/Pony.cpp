#include "Pony.hpp"

Pony::Pony(std::string name, double height, std::string colour) : name(name), colour(colour),height(height)
{

}
Pony::Pony(){return;}
Pony::~Pony()
{
    std::cout << "Pony " << this->name << " deleted" << std::endl;
    return;
}
void Pony::get_pony()
{
    std::cout << "It's new " << this->colour << " pony " << this->name << " and he very happy to see you"<<std::endl;
    std::cout << "His height " << this->height << std::endl;
}