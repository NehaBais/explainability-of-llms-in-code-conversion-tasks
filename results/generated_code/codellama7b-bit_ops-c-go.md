This is the conversion of the code from C to Go. Please note that the function name has been changed to reflect the language's convention, and some types have been changed for better compatibility with Go's type system.
```go
package main

import "fmt"

func bitwise(a, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", uint(a)<<uint(b)) /* left shift */
	fmt.Printf("a >> n: %d\n", uint(a)>>uint(b)) /* on most platforms: arithmetic right shift */
  c := a
	fmt.Printf("c >> b: %d\n", uint(c)>>uint(b)) /* logical right shift */
  fmt.Println()
}
```
The function bitwise takes two integers, a and b, as input. It performs the following operations on them using Go's bitwise operators. The functions uses fmt to print the output. Note that some of the shifts are converted from arithmetic right shift to logical right shift in Go because in C, the signed integer is converted into unsigned int for better compatibility with Go's type system.
- AND: a & b performs bitwise AND operation on a and b, producing the result r where r = 0 if no bits of a are set and r = 1 if at least one bit of a is set
- OR: a | b performs bitwise OR operation on a and b, producing the result r where r = 0 if neither bits of a nor b are set, and r = 1 if at least one bit of a or b is set
- XOR: a ^ b performs bitwise XOR operation on a and b, producing the result r where r = 0 if no bits of a or b are set and r = 1 if exactly one bit of a or b is set
- NOT: ~a performs bitwise NOT operation on a, producing the result r where r = 0 if all bits of a are cleared and r = -1 if at least one bit of a is set. Note that in Go, the bitwise NOT operator is represented by ^
- Left Shift: a << b performs left shift on a by amount of b bits, producing the result r where r = a with each bit shifted to the left by b positions. In Go, this is done using the syntax uint(a)<<uint(b). The function uses fmt to print the output.
- Right Shift: a >> b performs right shift on a by amount of b bits, producing the result r where r = a with each bit shifted to the right by b positions. In Go, this is done using the syntax uint(a)>>uint(b). The function uses fmt to print the output.
- Logical Right Shift: c >> b performs logical right shift on unsigned integer c by amount of b bits, producing the result r where r = c with each bit shifted to the right by b positions. In Go, this is done using the syntax uint(c)>>uint(b). The function uses fmt to print the output.

