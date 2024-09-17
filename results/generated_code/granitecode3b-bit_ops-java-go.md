Sure! Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
)
func main() {
 var a, b int = 10, 3
 fmt.Println("a AND b: ", a&b)
 fmt.Println("a OR b: ", a|b)
 fmt.Println("a XOR b: ", a^b)
 fmt.Println("NOT a: ", ^a)
 fmt.Println("a << b: ", a<<b) // left shift
 fmt.Println("a >> b: ", a>>b) // arithmetic right shift
 fmt.Println("a >>> b: ", a>>uint(b)) // logical right shift
 fmt.Println("a rol b: ", int(uint(a)|uint(a)<<uint(b))) //rotate left, Java 1.5+
 fmt.Println("a ror b: ", int(uint(a)<<uint(b)|uint(a)&uint(0x7fffffff)>>uint(b))) //rotate right, Java 1.5+
}
```
Explanation:
In Golang, the bitwise AND operator is represented by the `&` symbol, the bitwise OR operator is represented by the `|` symbol, and the bitwise XOR operator is represented by the `^` symbol. To perform a left shift, we use the `<<` symbol, to perform an arithmetic right shift, we use the `>>` symbol, and to perform a logical right shift, we use the `>>>` symbol.
To rotate a number left, we use the `rotateLeft` function from the `math/bits` package. To rotate a number right, we use the `rotateRight` function from the `math/bits` package. These functions take two arguments: the number to be rotated and the amount of rotation. In this example, we use the second integer as the rotation amount.

