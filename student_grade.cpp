#include<iostream>
using namespace std;

int main() {
    float sum,per;
    cout<<("Total marks of 5 subjects:");
    cin>>(sum);
    per=(sum)/5;

    if (per<=100 || per>90){
        cout<<"Your grade is A";
    }
    else if (90<=per && per>80){
        printf("Your grade is B");
    }
    else if (80<= per && per>70){
        printf("Your grade is C");
    }
    else if (70<= per && per>60){
        printf("Your grade is D");
    }
    else if (60<=per && per>50){
        printf("Your grade is E");
    }
    else if (per<=50){
        printf("Not qualified"); }

    return 0;
}