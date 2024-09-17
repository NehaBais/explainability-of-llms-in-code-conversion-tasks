### C++ code:
```
#include <iostream>
using namespace std;

int main(){
  int num=100;
  
  cout << "Factors of " << num << ": ";
  for(int i = 1; i <= num/2 ; i++){
    if (num % i == 0){ //checks the modulus to see if it is a factor
      std::cout << i << ' ';
    }
  }
  cout << '\n';
}
```

