#include <iostream>
#include <stdlib.h>
using namespace std;

class Car{
    public:
        string name;
        int price;
        int seats;
        string type;

    Car(string name, int price, int seats, string type){
        this->name = name;
        this->price = price;
        this->seats = seats;
        this->type = type;
    }

    void print(int price){
        cout << name << " " << this->price << " " << type << endl;
        cout << price << endl;
    }

};

void print(Car c){
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << endl;
}

int main(){
    Car c1("Audi", 100000, 4, "Sedan");
    c1.name = "BMW";
    print(c1);
    c1.print(57);
    return 0;
}


// this pointer is used to refer to the current object 
// Car c1 is the current object