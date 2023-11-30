#include "PhanSo.h"

PhanSo::PhanSo() : tu(0), mau(1) {}

PhanSo::PhanSo(int tu, int mau) : tu(tu), mau(mau) {}

PhanSo PhanSo::operator+(const PhanSo& other) const {
    PhanSo result;
    result.tu = this->tu * other.mau + other.tu * this->mau;
    result.mau = this->mau * other.mau;
    return result;
}

PhanSo PhanSo::operator++() {
    // Tang giá tr? c?a phân s? lên 1
    this->tu += this->mau;
    return *this;
}

PhanSo PhanSo::operator++(int) {
    PhanSo temp = *this;
    ++(*this);
    return temp;
}

void PhanSo::operator+=(const PhanSo& other) {
    *this = *this + other;
}

PhanSo::operator int() const {
    // Chuy?n d?i phân s? thành ph?n nguyên (l?y ph?n nguyên c?a phân s?)
    return tu / mau;
}

ostream& operator<<(ostream& os, const PhanSo& ps) {
    os << ps.tu << "/" << ps.mau;
    return os;
}

