#include <iostream>
using namespace std;

class sum{
    int n;
    public:
    void values(){
        cout <<"Enter any number: ";
        cin >> n;
    }

    int calc(){
        int temp =n;
        int first_digits;
        int last_digits;
        last_digits= temp % 10;

        while (temp >=10){
            temp= temp / 10;
            first_digits= temp;
        }

        return first_digits * last_digits;
    }
};

int main(){
    sum obj;
    obj.values();
    obj.calc();

    cout <<obj.calc()<< " is the product of two digits";
    return 0;
}