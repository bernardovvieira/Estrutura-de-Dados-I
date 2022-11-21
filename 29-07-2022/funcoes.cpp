#include <iostream>

template <typename T>
void troca(T &n1, T &n2)
{
    T aux = n1;
    n1 = n2;
    n2 = aux;
}

template <typename T>
T menor(const T v[], int n)
{
    T mv = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] < mv)
        {
            mv = v[i];
        }
    }
    return mv;
}

template <typename T>
void show(const T v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            std::cout << ", ";
        std::cout << v[i];
    }
    std::cout << std::endl;
}

template <typename T>
void bubblesort(T vet[], int n)
{
    bool trocou;
    do
    {
        trocou = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                troca(vet[i], vet[i + 1]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);
}
