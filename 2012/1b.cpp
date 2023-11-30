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

    // Phép c?ng
    PhanSo operator+(const PhanSo& other) const;

    // Phép ++ (tang giá tr? c?a phân s? lên 1)
    PhanSo operator++();    // Ti?n t?
    PhanSo operator++(int); // H?u t?

    // Phép c?ng và gán
    void operator+=(const PhanSo& other);

    // Chuy?n d?i sang ki?u int (l?y ph?n nguyên c?a phân s?)
    operator int() const;

    // Hàm in phân s?
    friend ostream& operator<<(ostream& os, const PhanSo& ps);
};

#endif
