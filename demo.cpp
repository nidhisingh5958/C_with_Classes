#include <iostream>
 using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    double getReal() const { return real; }
    double getImag() const { return imag; }
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator*(const Complex &c) const {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
    Complex operator/(const Complex &c) const {
        double denominator = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / denominator,
                       (imag * c.real - real * c.imag) / denominator);
   }
    friend ostream &operator << (ostream &os, const Complex &c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};
int main() {
    double ms,mos,cos,jos;
    cout<<"enter the real and imaginary part of 1"<<endl;
    cin>>ms>>mos;
    
    cout<<"enter the real and imaginary part of 2"<<endl;
    cin>>cos>>jos;
    
    Complex c1(ms,mos);
    Complex c2(cos,jos);
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;
    
    cout << "Complex numbers:\n";
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "Arithmetic operations:\n";
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}