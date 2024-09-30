#include <iostream>
using namespace std;

class fraction{
    int num;
    int den;
    public:
    void numNumerator(int x);
    void numDenominator(int y);
    int add();
    int subtract();
    int multiply();
    int divide();
};

void fraction::numNumerator(int x){
    int *ptr=&x;
    num=*ptr;
}
void fraction::numDenominator(int y){
    int *ptrd=&y;
    den=*ptrd;
}
int fraction::add(){
    int add;
    add = num+den;
    cout << "Sum is " << add;
    return add;
}
int fraction::subtract(){
    int sub;
    sub = num-den;
    cout << "Difference is " << sub;
    return sub;
}
int fraction::multiply(){
    int mul;
    mul = num*den;
    cout << "Multiplication is " << mul;
    return mul;
}
int fraction::divide(){
    int div;
    div = num/den;
    cout << "Division is " << div;
    return div; 
}

int main(){
    int x, y, op;
    cout << "Enter the numerator ";
    cin >> x;
    cout << "Enter the denominator ";
    cin >> y;

    fraction fraction1;
    fraction1.numNumerator(x);
    fraction1.numDenominator(y);

    cout << "Enter the operation you want to perform (1.+, 2.-, 3.*, 4./)";
    cin >> op;
    if (op==1){
        fraction1.add();
    }
    else if (op==2){
        fraction1.subtract();
    }
    else if (op==3){
        fraction1.multiply();
    }
    else if (op==4){
        fraction1.divide();
    }
    else {
        cout << "invalid input";
    }

    return 0;
}