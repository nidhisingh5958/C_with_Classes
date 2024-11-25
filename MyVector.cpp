#include <iostream>
using namespace std;

class Vector{
    public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    void add(int element){
        if(size == capacity){
            capacity *=2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }   
        arr[size++] = element; 
    }

    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int get(int index){
        if(index >= size || index < 0){
            return -1;
        }
        return arr[index];
    }

    void remove(){
        if(size == 0){
            return;
        }
        size--;
    }
};

int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(15);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(7);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;

    cout << v.get(3) << endl;
}