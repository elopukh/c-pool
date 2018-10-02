#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void randomChump()
{
    std::string name;
    int a = 1 + rand() % 8;
    std::cout << a << std::endl;
    for (int i = 0; i < a; i++)
    {
       name += ('a' + rand() % ('z' - 'a'));
    }
    ZombieEvent carl = ZombieEvent();
    carl.setZombieType("good");
    Zombie* bob = carl.newZombie(name);
    bob->announce();
    delete bob;
}

int main()
{
    srand(time(0));
    randomChump();
    randomChump();
    return (0);
}