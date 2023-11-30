#include <iostream>

using namespace std;

int main() {
    // Các thông s? c?a máy l?c
    double donGiaThue = 80000;  // Ðon giá thuê d?ng/h
    double congSuatLoc = 50;    // Công su?t l?c m3/h
    double luongHoaChat = 200;  // Lu?ng hóa ch?t g
    double thoiGianHoatDong = 12;  // Th?i gian ho?t d?ng h
    double donGiaHoaChat = 10000;  // Ðon giá hóa ch?t d?ng/g

    // Bu?c 1: Tính công su?t l?c th?c t?
    double congSuatLocThucTe;
    if (thoiGianHoatDong < 10) {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100);
    } else {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100) / (thoiGianHoatDong / 10);
    }

    // Bu?c 2: Tính lu?ng nu?c m?i máy l?c
    double luongNuoc = congSuatLocThucTe * thoiGianHoatDong;

    // Bu?c 3: Tính chi phí thuê m?i máy
    double chiPhiThue = donGiaThue * thoiGianHoatDong;

    // Bu?c 4: Tính chi phí nhiên li?u (hóa ch?t)
    double chiPhiNhienLieu = luongHoaChat * donGiaHoaChat;

    // Bu?c 5: Tính t?ng chi phí s? d?ng máy
    double chiPhiSuDungMay = chiPhiThue + chiPhiNhienLieu;

    // In k?t qu?
    cout << "Công su?t l?c th?c t?: " << congSuatLocThucTe << " m3/h" << endl;
    cout << "Lu?ng nu?c m?i máy l?c: " << luongNuoc << " m3" << endl;
    cout << "Chi phí thuê m?i máy: " << chiPhiThue << " d?ng" << endl;
    cout << "Chi phí nhiên li?u: " << chiPhiNhienLieu << " d?ng" << endl;
    cout << "T?ng chi phí s? d?ng máy: " << chiPhiSuDungMay << " d?ng" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // Các thông s? c?a máy l?c
    double donGiaThue = 80000;  // Ðon giá thuê d?ng/h
    double congSuatLoc = 50;    // Công su?t l?c m3/h
    double luongHoaChat = 200;  // Lu?ng hóa ch?t g
    double thoiGianHoatDong = 12;  // Th?i gian ho?t d?ng h
    double donGiaHoaChat = 10000;  // Ðon giá hóa ch?t d?ng/g

    // Bu?c 1: Tính công su?t l?c th?c t?
    double congSuatLocThucTe;
    if (thoiGianHoatDong < 10) {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100);
    } else {
        congSuatLocThucTe = congSuatLoc * (luongHoaChat / 100) / (thoiGianHoatDong / 10);
    }

    // Bu?c 2: Tính lu?ng nu?c m?i máy l?c
    double luongNuoc = congSuatLocThucTe * thoiGianHoatDong;

    // Bu?c 3: Tính chi phí thuê m?i máy
    double chiPhiThue = donGiaThue * thoiGianHoatDong;

    // Bu?c 4: Tính chi phí nhiên li?u (hóa ch?t)
    double chiPhiNhienLieu = luongHoaChat * donGiaHoaChat;

    // Bu?c 5: Tính t?ng chi phí s? d?ng máy
    double chiPhiSuDungMay = chiPhiThue + chiPhiNhienLieu;

    // In k?t qu?
    cout << "Công su?t l?c th?c t?: " << congSuatLocThucTe << " m3/h" << endl;
    cout << "Lu?ng nu?c m?i máy l?c: " << luongNuoc << " m3" << endl;
    cout << "Chi phí thuê m?i máy: " << chiPhiThue << " d?ng" << endl;
    cout << "Chi phí nhiên li?u: " << chiPhiNhienLieu << " d?ng" << endl;
    cout << "T?ng chi phí s? d?ng máy: " << chiPhiSuDungMay << " d?ng" << endl;

    return 0;
}


