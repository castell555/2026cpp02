#include <iostream>
using namespace std;

class Complex {
    int real;      // 실수부
    int imaginary; // 허수부
public:
    // 1. 기본 생성자 (주석 처리되었던 방식 포함)
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // 연산자 오버로딩 (+)
    Complex operator+(Complex right) {
        return Complex(this->real + right.real, this->imaginary + right.imaginary);
    }

    int getReal() const {
        return real;
    }
    int getImaginary() const {
        return imaginary;
    }
};

int main() {
    Complex c1(7, 2);
    Complex c2(2, 9);
    int a = 1, b = 2;
    cout << c1.getReal() << "+" << c1.getImaginary() << "i\n";
    cout << c2.getReal() << "+" << c2.getImaginary() << "i\n";
    cout << a + b << '\n';
    Complex c3 = c1 + c2;  // fixed
    cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
    return 0;
}