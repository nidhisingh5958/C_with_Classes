#include <iostream>
using namespace std;

class value{
    int len;
    int breath;
    public:
    void set (int x, int y);
    void area();
    void perimeter();
};

void value::set(int x, int y){
    int *ptr=&x;
    int *ptrb=&y;
    len=*ptr;
    breath=*ptrb;
}
void value::area(){
    int area;
    area = len*breath;
    cout << "The area of rectangle is " << area << endl;
}
void value::perimeter(){
    int peri;
    peri = 2*(len+breath);
    cout << "The perimeter of rectangle is " << peri;
}

int main(){
    int x,y;
    cout << "Enter the length of rectangle: " ;
    cin >> x;
    cout << "Enter the breath of rectangle: " ;
    cin >> y;
    value value1;
    value1.set(x,y);
    value1.area();
    value1.perimeter();
    return 0;
}