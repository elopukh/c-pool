#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
    private:
    Zombie *zomb;
    public:
    int num;
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();

};
#endif