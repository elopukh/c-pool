#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde *a = new ZombieHorde(10);
    a->announce();

    delete a;
}