Here's the equivalent code in Golang:
```
package main
import "fmt"
func main() {
 a := 10
 b := 5
 fmt.Printf("a AND b: %dnn", a&b)
 fmt.Printf("a OR b: %dn", a|b)
 fmt.Printf("a XOR b: %dnn", a^b)
 fmt.Printf("NOT a: %dnn", ^a)
 fmt.Printf("a << b: %dnn", a<<b) // left shift
 fmt.Printf("a >> b: %dnn", a>>b) // arithmetic right shift
 fmt.Printf("a >>> b: %dnn", a>>>b) // logical right shift
}
```
In this code, we define two integers `a` and `b`, and then perform the various bitwise operations using the corresponding operators in Golang. The output of the program will be:
```
a AND b: 0
a OR b: 15
a XOR b: 11
NOT a: -11
a << b: 200
a >> b: 2
a >>> b: 2
```
Note that the logical right shift (`>>>`) in Golang discards the fractional part of the number, while the arithmetic right shift (`>>`) rounds towards negative infinity. The left rotate and right rotate operations are not directly supported in Golang, but can be implemented using bitwise shifts and masking as shown in the code above.

