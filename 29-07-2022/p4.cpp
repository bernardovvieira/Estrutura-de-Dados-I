#include <iostream>
#include "funcoes.cpp"

int main()
{
    int vet[8] = {18, 33, 5, 27,
                  1, 20, 38, 16};

    bubblesort(vet, 8);
    show(vet, 8);
    return 0;
}