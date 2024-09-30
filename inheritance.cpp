# include <iostream>
# include <string>
using namespace std;

class employee{
public:
    int employee_id;
    string name;
    string department;
};

class work: public employee{
public:
    int hours_worked();

    
};

class salary: public work {
    
};

int hours_worked(){
    int task1,task2,task3,task4,task5;
    cout<<"hours worked for for task1 "<<task1;
    cout<<"hours worked for for task1 "<<task2;
    cout<<"hours worked for for task1 "<<task3;
    cout<<"hours worked for for task1 "<<task4;
    cout<<"hours worked for for task1 "<<task5;
}

int main(){
    class employee;
    class work;
    class salary;
}