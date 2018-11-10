#include "btree.hxx"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <set>

int main()
{
    BTree b;

    for(int i = 50; i > 1; i--)
    {
        int x = rand() % 10000;
        b.Insert(x);
    }

    b.Display();
}
