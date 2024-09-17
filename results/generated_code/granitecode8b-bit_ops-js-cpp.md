Here is the code converted from JavaScript to C++:
```
void bitwise(int a, int b){
 cout << "a AND b: " << (a & b) << endl;
 cout << "a OR b: " << (a | b) << endl;
 cout << "a XOR b: " << (a ^ b) << endl;
 cout << "NOT a: " << ~a << endl;
 cout << "a << b: " << (a << b) << endl; // left shift
 cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
 cout << "a >>> b: " << (a >>> b) << endl; // logical right shift
}
``` 
Note that in C++, the bitwise AND operator is `&`, the bitwise OR operator is `|`, the bitwise XOR operator is `^`, and the bitwise NOT operator is `~`. The left shift operator is `<<`, the arithmetic right shift operator is `>>`, and the logical right shift operator is `>>>`.

