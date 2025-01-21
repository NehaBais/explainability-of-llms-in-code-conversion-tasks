The error is that `std::cout` does not know how to handle printing an object of type `MyInt`. The fix is to overload the stream insertion operator `<<` for the `MyInt` class. Corrected code:

```cpp
#include <iostream>
class MyInt {
    int value;
public:
    MyInt(int val) : value(val) {}
    friend std::ostream& operator<<(std::ostream &out, const MyInt &obj);
};
std::ostream& operator<<(std::ostream &out, const MyInt &obj) {
    out << obj.value;
    return out;
}
int main() {
    MyInt a(10);
    std::cout << a; // will print 10
    return 0;
}
```
