 #include "ZombieHorde.hpp"
 
 ZombieHorde::ZombieHorde(int N)
 {
    std::string name1;
    this->num = N;
    this->zomb = new Zombie[N];
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < 4; i++)
            name1 += ('a' + rand() % ('z' - 'a'));
       this->zomb[j].set_name(name1);
       name1.clear();
    }
    std::cout << "NEW ZOMBIE HORDE!!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "ZOMBIE HORDE is DEAD!!" << std::endl;;
}
void ZombieHorde::announce()
{
    for (int i = 0; i < this->num; i++)
    {
        this->zomb[i].announce();
    }
}
