#include <iostream>
#include <cmath>

using namespace std;

class Armstrong{
    int n;
    public:
    void value(){
        cout <<"Enter a number: "; // 143
        cin >>n;
    }

    int calc(){
        int temp;
        temp =n;
        int digits = 0;
        int sum = 0;
        int last_digits;

        while (temp > 0){
            digits = digits +1; // 1, 2, 3
            temp= temp/10;  // 14, 1
        }
        temp =n;

        while( temp > 0){
            last_digits= temp %10; //  3,4,1
            sum= sum + pow(last_digits, digits); // 3^3 + 4^3 + 1^3
            temp = temp /10;
        }

        if(n == sum){
            cout<< n <<" is Arstrong";
        }

        else{
            cout << n <<" isn't Armstrong"; // 143
        }
        return sum;
    }

};

int main(){
    Armstrong obj;
    obj.value();
    obj.calc();
    return 0;
}