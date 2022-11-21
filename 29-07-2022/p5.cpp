#include <iostream>
#include "funcoes.cpp"

int main()
{
    // std::string vet[5] = {"File", "Edit",
    //                 "Selection", "View", "Go"};

    char vet[] = {'A', 'Z', 'F', 'M', 'J'};
    bubblesort(vet, 5);
    show(vet, 5);
    return 0;
}