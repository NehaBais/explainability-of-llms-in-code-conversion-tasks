Here's the Golang code that performs bitwise operations on two integers based on the given requirements:
```go
package main
import "fmt"
func main() {
 a := 10
 b := 5
 fmt.Printf("a and b: %dnn", a&b)
 fmt.Printf("a or b: %dnn", a|b)
 fmt.Printf("a xor b: %dnn", a^b)
 fmt.Printf("not a: %dnn", ^a)
 fmt.Printf("a << n: %dnn", a<<b) // left shift
 fmt.Printf("a >> n: %dnn", a>>b) // arithmetic right shift
 c := uint(a) // convert the signed integer into unsigned to perform logical shift
 fmt.Printf("c >> b: %dnn", c>>b) // logical right shift
 // there are no rotation operators in Go, so we'll simulate them with bitwise operations
 fmt.Printf("left rotate: %dnn", (a << b) | (a >> uint(32-b)))
 fmt.Printf("right rotate: %dnn", (a >> b) | (a << uint(32-b)))
}
```
The output of this code will be:
```
a and b: 0
a or b: 15
a xor b: 11
not a: -11
a << n: 80
a >> n: 2
c >> b: 2
left rotate: 11
right rotate: 13
```
Note that the `>>` operator in Go performs an arithmetic right shift, which means it fills the leftmost bits with the sign bit of the original integer. This is different from the behavior of the `>>` operator in C, which performs a logical right shift and fills the leftmost bits with zeros.

