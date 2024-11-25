#include <iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int age;
        string country;
        string role;

    Cricketer(string name, int age, string country, string role){
        this->name = name;
        this->age = age;
        this->country = country;
        this->role = role;
    }

    void print(){
        cout << name << " " << age << " " << country << " " << role << endl;
    }

};

int main(){
    Cricketer c1("Virat Kohli", 32, "India", "Batsman");
    Cricketer* c2 = new Cricketer("MS Dhoni", 39, "India", "Wicket Keeper");

    c1.print();
    (*c2).print();     // or c2->print();
    
    return 0;
}




// int* ptr = new int(5968);   
// new int is used to allocate memory in heap during runtime 
// no name is given to the variable which stores the value since it is directly stored to the pointer
// cout << *ptr << endl;


// int * arr = new int[5];  -- dynamic array 