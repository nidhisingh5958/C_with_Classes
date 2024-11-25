#include <iostream>
using namespace std;

class Schooty{ // parent class
public:
    int topSpeed;
    float mileage;

    virtual void sound(){
        cout << "Vroom Vroom" << endl;
    }
    
private: 
    int bootspace;
};

class Bike : public Schooty{ // child class
public:
    int topSpeed;
    float mileage;

    void sound(){
        cout << "Dhoom Dhoom" << endl;
    }
};

int main(){
    Schooty* b = new Bike();  // object of derived class
    b->sound();
}

// overriding makes sure that the function in the derived class is called instead of the function in the base class or parent class