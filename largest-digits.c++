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
        int max_digits = 0;
        while (temp > 0)
        {
            digits = temp % 10;
            if(digits > max_digits){
                max_digits = digits;
            }
            temp = temp /10;
        }
        return max_digits;
    }

};

int main(){
    Digits obj;
    obj.value();
    obj.calc();

    cout <<obj.calc() << " Is largest digits you enter";
    return 0;
}