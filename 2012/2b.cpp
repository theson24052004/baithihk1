#include <iostream>

// T?p tin AbstractClass.h
#ifndef _AbstractClass_h
#define _AbstractClass_h

class LopTruuTuong {
public:
    // Phuong th?c thu?n ?o
    virtual void phuongThucTuanAo() = 0;

    // Phuong th?c có tri?n khai
    void phuongThucCoTrienKhai() {
        std::cout << "Cac cong viec cu the cua phuong thuc co trien khai." << std::endl;
    }
};

#endif

// T?p tin ConcreteClass.cpp
#include "AbstractClass.h"

class LopCon : public LopTruuTuong {
public:
    // Tri?n khai phuong th?c thu?n ?o
    void phuongThucTuanAo() override {
        std::cout << "Trien khai cua phuong thuc tuan ao." << std::endl;
    }
};

// T?p tin main.cpp
#include "AbstractClass.h"

int main() {
    LopCon doiTuong;
    doiTuong.phuongThucTuanAo();    // Trien khai cua phuong thuc tuan ao.
    doiTuong.phuongThucCoTrienKhai(); // Cac cong viec cu the cua phuong thuc co trien khai.

    return 0;
}

