#include <iostream>

using namespace std;

int main() {
    float length, width, area;

    // Nhập chiều dài và chiều rộng từ người dùng
    cout << "Nhập chiều dài của hình chữ nhật: ";
    cin >> length;

    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> width;

    // Tính diện tích của hình chữ nhật
    area = length * width;

    // Hiển thị diện tích
    cout << "Diện tích của hình chữ nhật là: " << area << endl;

    return 0;
}
