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
        int temp =n;
        int r;
        int rev=0;
        while (temp>0) {
            r = temp %10;
            rev = rev *10 + r;
            temp = temp /10;
        }

        if(n == rev){
            cout<< rev <<" Num is palindrome";
        }
        else{
            cout<<rev << " Num isn't palindrome";
        }
        return rev;
    }

};

int main(){
    Product obj;
    obj.value();
    obj.calc();
    return 0;
}