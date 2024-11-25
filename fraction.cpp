#include <iostream>
using namespace std;

class Fraction{
    int num;
    int den;
    public:
    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }

    void display(){
        cout << num << "/" << den << endl;
    }

    Fraction operator+(Fraction f){
        int newNum = num*f.den + den*f.num;
        int newDen = den*f.den;
        Fraction ans(newNum, newDen);
        return ans;
    }

    Fraction operator-(Fraction f){
        int newNum = num*f.den - den*f.num;
        int newDen = den*f.den;
        Fraction ans(newNum, newDen);
        return ans;
    }

    Fraction operator*(Fraction f){}

    Fraction operator/(Fraction f){}
    
    Fraction simplify(Fraction f){}
    
};

int main(){
    Fraction f1(10, 20);
    Fraction f2(30, 40);
    f1.display();
    f2.display();
    Fraction f3 = f1 + (f2);
    f3.display();
    Fraction f4 = f1 - (f2);
    f4.display();
}