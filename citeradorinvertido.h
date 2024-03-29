#ifndef CITERADORINVERTIDO_H
#define CITERADORINVERTIDO_H

#include "cnodoinvertido.h"

class cIteradorInvertido {
private:
    cNodoInvertido* pActual;

    void setNodo(cNodoInvertido* pNodo);

    friend class cListaInvertida;

public:
    cIteradorInvertido();

    // Insertar y eliminar en la lista invertida
    void insertarNodoInvertido(int ai, cObjeto* obj);
    int eliminarNodoInvertido(); // Retorna el valor del atributo invertido

    void insertarElemento(cObjeto* obj);


    // Sobrecarda de operadores
    void operator =(cIteradorInvertido& otro);

    bool operator ==(cIteradorInvertido& otro);
    bool operator !=(cIteradorInvertido& otro);

    // Prefijos
    void operator ++();
    void operator --();

    int operator *();

    // Postfijos
    void operator ++(int);
    void operator --(int);
};

#endif // CITERADORINVERTIDO_H
