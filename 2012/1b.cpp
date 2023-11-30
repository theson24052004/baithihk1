#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    // Constructor
    PhanSo();
    PhanSo(int tu, int mau);

    // Ph�p c?ng
    PhanSo operator+(const PhanSo& other) const;

    // Ph�p ++ (tang gi� tr? c?a ph�n s? l�n 1)
    PhanSo operator++();    // Ti?n t?
    PhanSo operator++(int); // H?u t?

    // Ph�p c?ng v� g�n
    void operator+=(const PhanSo& other);

    // Chuy?n d?i sang ki?u int (l?y ph?n nguy�n c?a ph�n s?)
    operator int() const;

    // H�m in ph�n s?
    friend ostream& operator<<(ostream& os, const PhanSo& ps);
};

#endif
