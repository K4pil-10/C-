#include <iostream>
using namespace std;

class Digits{
    int n;
    public:
    void value(){
        cout<<"Enter a number: ";
        cin >> n;
    }

    int calc(){
        int temp;
        int mid_digits =0;
        temp = n;
        int digit;

        temp= temp/10;


        while(temp >= 10){
            digit= temp %10;
            mid_digits= mid_digits + digit;
            temp = temp/10;
        }
        return mid_digits;

    }
};


int main(){
    Digits obj;
    obj.value();
    obj.calc();

    cout << obj.calc()<< " is sum of middle digits";
}