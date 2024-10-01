 Here is the C++ code that satisfies the requirements of the task: 
```
#include <iostream>
using namespace std;
void logic(bool a, bool b){
   cout<<"a and b:"<<(a && b)<<endl;
   cout<<"a or b:"<<(a || b)<<endl;
   cout<<"not a:"<<!a<<endl;
}
int main(){
   logic(true,false);
   return 0;
}
```
The output of the code will be:
a and b: false
a or b: true
not a: true
