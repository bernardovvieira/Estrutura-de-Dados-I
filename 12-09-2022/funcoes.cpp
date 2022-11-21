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

//Método para ordenar um vetor (Partition)
template <typename T>
int partition(T vet[], int start, int end)
{
    int pivot = start;

    for (int i = start; i < end; i++)
    {
        if (vet[i] <= vet[end])
        {
            std::swap(vet[pivot++], vet[i]);
        }
    }
    std::swap(vet[pivot], vet[end]);
    return pivot;
}

//Método para ordenar um vetor (Quick Sort)
template <typename T>
void quicksort_r(T vet[], int start, int end)
{
    if (end <= start)
    {
        return;
    }

    int pivot  = partition(vet, start, end);

    quicksort_r(vet, start, pivot - 1);
    quicksort_r(vet, pivot + 1, end);
}

template <typename T>
void quicksort(T vet[], int n)
{
    quicksort_r(vet, 0, n - 1);
}