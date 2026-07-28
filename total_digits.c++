#include <iostream>
#include <cmath>

using namespace std;

class Digits{
    int n;
    public:
    void value(){
        cout <<"Enter a number: ";
        cin >>n;
    }

    int calc(){
        int temp;
        temp =n;
        int digits = 0;
        while (temp > 0){
            digits = digits +1; 
            temp= temp/10; 
        }
        return digits;
    }

};

int main(){
    Digits obj;
    obj.value();
    obj.calc();
    cout << "total digits = " <<obj.calc();
    return 0;
}