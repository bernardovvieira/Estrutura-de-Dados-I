#include <iostream>

//Trocar um valor por outro do vetor
template <typename T>
void troca(T &n1, T &n2)
{
    T aux = n1;
    n1 = n2;
    n2 = aux;
}

//Menor valor do vetor
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

//Mostrar o vetor
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

//Método para ordenar um vetor (Bubble Sort)
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

//Método para ordenar um vetor (Selection Sort)
template <typename T>
void selectionsort(T vet[], int n)
{
    for (int j = 0; j < n - 1; j++) 
    {
        int posm = j;
        for (int i = j + 1; i < n; i++)
        {
            if (vet[i] < vet[posm])
            {
                posm = i;             
            }
        }
        if (j != posm)
        {
            std::swap(vet[j], vet[posm]);
        }
    }
}

//Método para ordenar um vetor (Insertion Sort)
template <typename T>
void insertionsort(T vet[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        auto aux = vet[i];
        int j = i - 1;
        while (j >= 0 && aux < vet[j]) 
        {
            vet[j + 1] = vet[j];
            j--; 
        }
        vet[j + 1] = aux;
    }
}