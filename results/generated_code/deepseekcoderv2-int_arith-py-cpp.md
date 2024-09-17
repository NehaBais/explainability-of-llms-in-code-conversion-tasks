## Answer 2
```cpp
#include <iostream>

using namespace std;

int main() {
    double input1, input2;
    cout << "Enter two integers: ";
    cin >> input1 >> input2;
    
    cout << "\nSum:\t\t" << (input1 + input2) << endl;
    cout << "Difference:\t" << (input1 - input2) << endl;
    cout << "Product:\t" << (input1 * input2) << endl;
    
    int quotient = static_cast<int>(input1 / input2);
    double floatQuotient = (double)(input1 / input2);
    cout << "Integer quotient:\t\t" << quotient << endl;
    cout << "Float quotient:\t\t" << floatQuotient << endl;
    
    int wholeRemainder, actualRemainder;
    if(quotient < 0) {
        wholeRemainder = -int(-floatQuotient);
        actualRemainder = input1 - (wholeRemainder * input2);
    } else {
        wholeRemainder = int(floatQuotient);
        actualRemainder = input1 % input2;
    }
    cout << "Whole remainder:\t\t" << wholeRemainder << endl;
    cout << "Actual remainder:\t" << actualRemainder << endl;
    
    double exponentiation = pow(input1, input2);
    cout << "Exponentiation:\t" << exponentiation << endl;
}
```
## Answer 3
```cpp
#include <iostream>
using namespace std;

int main(){
    int num_1,num_2;
    
    cout<<"Enter two numbers: "<<endl;
    cin>>num_1>>num_2;


    cout<<endl<<num_1+num_2;
    cout<<endl<<num_1-num_2;
    cout<<endl<<num_1*num_2;
    cout<<endl<<num_1/num_2;
    float div=static_cast<float>(num_1)/num_2;
    int rem=num_1%num_2;
    if(div>0)cout<<"quotient is "<<int(div);
    else cout<<"quotient is "<<-int(-div);
    cout<<endl<<rem;
    float powr=pow(num_1,num_2);
    cout<<endl<<powr;
    
}
```
