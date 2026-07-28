#include <iostream>
using namespace std;

class Product{
    int n;

    public:

    void value(){
        cout<<"Enter a number: ";
        cin >> n;
    }

    int calc(){

        int temp = n;
        int last_digit;

        int mul= 1;
        while (temp > 0){
            last_digit= temp % 10;
            mul = mul * last_digit;
            temp = temp / 10;
        }
        return mul;
    }

};

int main(){
    Product obj;
    obj.value();
    cout<<"The multiply of enter number is : " << obj.calc();
    return 0;
}