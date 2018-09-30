#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string stype;
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
};

 #endif