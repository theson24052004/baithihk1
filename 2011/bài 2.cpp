#include <iostream>

using namespace std;

int main() {
    // C�c th�ng s? c?a m�y l?c
    double donGiaThue = 80000;  // �on gi� thu� d?ng/h
    double congSuatLoc = 50;    // C�ng su?t l?c m3/h
    double luongHoaChat = 200;  // Lu?ng h�a ch?t g
    double thoiGianHoatDong = 12;  // Th?i gian ho?t d?ng h
    double donGiaHoaChat = 10000;  // �on gi� h�a ch?t d?ng/g

    // Bu?c 1: T�nh c�ng su?t l?c th?c t?
    double congSuatLocThucTe;
    if (thoiGianHoatDong < 10) {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100);
    } else {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100) / (thoiGianHoatDong / 10);
    }

    // Bu?c 2: T�nh lu?ng nu?c m?i m�y l?c
    double luongNuoc = congSuatLocThucTe * thoiGianHoatDong;

    // Bu?c 3: T�nh chi ph� thu� m?i m�y
    double chiPhiThue = donGiaThue * thoiGianHoatDong;

    // Bu?c 4: T�nh chi ph� nhi�n li?u (h�a ch?t)
    double chiPhiNhienLieu = luongHoaChat * donGiaHoaChat;

    // Bu?c 5: T�nh t?ng chi ph� s? d?ng m�y
    double chiPhiSuDungMay = chiPhiThue + chiPhiNhienLieu;

    // In k?t qu?
    cout << "C�ng su?t l?c th?c t?: " << congSuatLocThucTe << " m3/h" << endl;
    cout << "Lu?ng nu?c m?i m�y l?c: " << luongNuoc << " m3" << endl;
    cout << "Chi ph� thu� m?i m�y: " << chiPhiThue << " d?ng" << endl;
    cout << "Chi ph� nhi�n li?u: " << chiPhiNhienLieu << " d?ng" << endl;
    cout << "T?ng chi ph� s? d?ng m�y: " << chiPhiSuDungMay << " d?ng" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // C�c th�ng s? c?a m�y l?c
    double donGiaThue = 80000;  // �on gi� thu� d?ng/h
    double congSuatLoc = 50;    // C�ng su?t l?c m3/h
    double luongHoaChat = 200;  // Lu?ng h�a ch?t g
    double thoiGianHoatDong = 12;  // Th?i gian ho?t d?ng h
    double donGiaHoaChat = 10000;  // �on gi� h�a ch?t d?ng/g

    // Bu?c 1: T�nh c�ng su?t l?c th?c t?
    double congSuatLocThucTe;
    if (thoiGianHoatDong < 10) {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100);
    } else {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100) / (thoiGianHoatDong / 10);
    }

    // Bu?c 2: T�nh lu?ng nu?c m?i m�y l?c
    double luongNuoc = congSuatLocThucTe * thoiGianHoatDong;

    // Bu?c 3: T�nh chi ph� thu� m?i m�y
    double chiPhiThue = donGiaThue * thoiGianHoatDong;

    // Bu?c 4: T�nh chi ph� nhi�n li?u (h�a ch?t)
    double chiPhiNhienLieu = luongHoaChat * donGiaHoaChat;

    // Bu?c 5: T�nh t?ng chi ph� s? d?ng m�y
    double chiPhiSuDungMay = chiPhiThue + chiPhiNhienLieu;

    // In k?t qu?
    cout << "C�ng su?t l?c th?c t?: " << congSuatLocThucTe << " m3/h" << endl;
    cout << "Lu?ng nu?c m?i m�y l?c: " << luongNuoc << " m3" << endl;
    cout << "Chi ph� thu� m?i m�y: " << chiPhiThue << " d?ng" << endl;
    cout << "Chi ph� nhi�n li?u: " << chiPhiNhienLieu << " d?ng" << endl;
    cout << "T?ng chi ph� s? d?ng m�y: " << chiPhiSuDungMay << " d?ng" << endl;

    return 0;
}


