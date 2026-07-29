#include <iostream>
using namespace std;

class Digits{
    int n;

    public:

    void value(){
        cout<<"Enter A Number: ";
        cin >> n;
    }

    int calc(){
        int temp = n;
        int digits;
        int min_digits = 9;
        while (temp > 0)
        {
            digits = temp % 10;
            if(digits < min_digits){
                min_digits = digits;
            }
            temp = temp /10;
        }
        return min_digits;
    }

};

int main(){
    Digits obj;
    obj.value();
    obj.calc();

    cout <<obj.calc() << " Is smallest digits you enter";
    return 0;
}