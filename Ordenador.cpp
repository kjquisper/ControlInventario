#include "Ordenador.h"

template <class T>
void Ordenador<T> :: Intercambia(T *A, int ind1, int ind2){
    T aux;
    aux = A[ind1];
    A[ind1] = A[ind2];
    A[ind2] = aux;
}

template <class T>
void InterDirDer<T> :: Ordena(T *A, int n){
    for(int i = 1; i <= n-1; i++)
        for(int j = 1; j <= n-i; j++)
            if(A[j] > A[j+1])
               this->Intercambia(A,j,j+1);
}

