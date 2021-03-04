#ifndef ORDENADOR_H
#define ORDENADOR_H

template <class T>
class Ordenador{
    public:
        virtual void Ordena(T *A, int n) = 0;
        void Intercambia(T *A, int ind1, int ind2);
};
 

template <class T>
class InterDirDer : public Ordenador<T>{
    public:
    void Ordena(T *A, int n);
};
 

#endif