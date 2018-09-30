#include "Pony.hpp"

void PonyOnTheHeap()
{
    Pony *carl = new Pony("Carl", 1.2, "black");
    carl->get_pony();
    delete carl;
}

void PonyOnTheStack()
{
    Pony jack = Pony("Jack", 0.6, "white");
    jack.get_pony();
}

int main()
{
    PonyOnTheHeap();
    PonyOnTheStack();
    return (0);
}