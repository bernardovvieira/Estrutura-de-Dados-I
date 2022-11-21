// Matrícula: 179835
// Nome completo: Bernardo Vivian Vieira

#include <iostream>

template <typename T> 
void troca(T &n1, T &n2) {
  T aux = n1;
  n1 = n2;
  n2 = aux;
}

template <typename T> 
T menor(const T v[], int n) {
  T mv = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] < mv) {
      mv = v[i];
    }
  }
  return mv;
}

template <typename T> 
void show(const T v[], int n) {
  for (int i = 0; i < n; i++) {
    if (i > 0)
      std::cout << ", ";
    std::cout << v[i];
  }
  std::cout << std::endl;
}

template <typename T> 
void bubblesort(T vet[], int n) {
  bool trocou;
  do {
    trocou = false;
    for (int i = 0; i < n - 1; i++) {
      if (vet[i] > vet[i + 1]) {
        troca(vet[i], vet[i + 1]);
        trocou = true;
      }
    }
    n--;
  } while (trocou);
}

template <typename T> 
void selectionsort(T vet[], int n) {
  for (int j = 0; j < n - 1; j++) {
    int posm = j;
    for (int i = j + 1; i < n; i++) {
      if (vet[i] < vet[posm]) {
        posm = i;
      }
    }
    if (j != posm) {
      std::swap(vet[j], vet[posm]);
    }
  }
}

template <typename T> 
void insertionsort(T vet[], int n) {
  for (int i = 1; i < n; i++) {
    auto aux = vet[i];
    int j = i-1;
    while(j>=0 && aux<vet[j]){
        vet[j+1] = vet[j];
        j--;
    }
    vet[j+1] = aux;
  }
}

// TODO
template <typename T>
void mergesort(T vet[], int n) {
  if (n <= 1) {
    return;
  }
  
  int meio = n / 2;
  mergesort(vet, meio);
  mergesort(vet + meio, n - meio);

  T *aux = new T[n];

  int i = 0;
  int j = meio;
  int k = 0;

  while (i < meio && j < n) {
    if (vet[i] < vet[j]) {
      aux[k++] = vet[i++];
    } else {
      aux[k++] = vet[j++];
    }
  }
  while (i < meio) {
    aux[k++] = vet[i++];
  }
  while (j < n) {
    aux[k++] = vet[j++];
  }
  for (int i = 0; i < n; i++) {
    vet[i] = aux[i];
  }
  
  delete[] aux;
}
