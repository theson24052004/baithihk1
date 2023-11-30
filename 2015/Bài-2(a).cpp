#include <iostream>
#include <vector>

using namespace std;

class SoNguyenLon {
private:
    vector<int> chuSo;

public:
    // Constructors
    SoNguyenLon() {}

    SoNguyenLon(const string& chuoiSo) {
        for (int i = chuoiSo.length() - 1; i >= 0; --i) {
            chuSo.push_back(chuoiSo[i] - '0');
        }
    }

    // Phép cộng
    SoNguyenLon operator+(const SoNguyenLon& soKhac) const {
        SoNguyenLon ketQua;
        int nho = 0;
        int kichThuocMax = max(chuSo.size(), soKhac.chuSo.size());

        for (int i = 0; i < kichThuocMax || nho; ++i) {
            int tong = nho;
            if (i < chuSo.size()) {
                tong += chuSo[i];
            }
            if (i < soKhac.chuSo.size()) {
                tong += soKhac.chuSo[i];
            }

            ketQua.chuSo.push_back(tong % 10);
            nho = tong / 10;
        }

        return ketQua;
    }

    // Xuất
    friend ostream& operator<<(ostream& os, const SoNguyenLon& so) {
        for (int i = so.chuSo.size() - 1; i >= 0; --i) {
            os << so.chuSo[i];
        }
        return os;
    }
};

int main() {
    SoNguyenLon so1("123456789");
    SoNguyenLon so2("987654321");

    SoNguyenLon ketQua = so1 + so2;

    cout << "Tong hai so nguyen lon la: " << ketQua << endl;

    return 0;
}
