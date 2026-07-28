#include <iostream>
using namespace std;

class sum{
    int n;
    
    public:
    
    void value() {
        cout <<"Enter a Number: ";
        cin >> n;
    }
    
    int calc(){
        int temp;
        int sum= 0;
        temp = n;
        int last_digit;
        while(temp>0){
            last_digit = temp %10;
            sum = sum+ last_digit;
            temp= temp / 10;
        }
        return sum;
    }
};

int main(){
    sum obj;
    obj.value();
    obj.calc();
    cout << "The sum of entered number is : " << obj.calc();
    return 0;
}