Sure, here's the converted code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 _, err := fmt.Fscanf(os.Stdin, "%d %d", &a, &b)
 if err != nil {
 panic(err)
 }
 c := a + b
 d := a - b
 e := a * b
 f := a / b
 g := a % b
 h := int(float64(a) / float64(b))
 i := a ^ b
 fmt.Println("a+b =", c)
 fmt.Println("a-b =", d)
 fmt.Println("a*b =", e)
 fmt.Println("a/b =", f, ", remainder", g)
 fmt.Println("a^b =", i)
}
```
This code reads two integers from the user using `fmt.Fscanf`, and then performs the arithmetic operations on them. The output is displayed using `fmt.Println`. Note that in Golang, integer division rounds down towards zero, so the quotient is rounded down to the nearest integer. Also, the remainder is calculated as the result of the modulo operation between the two integers. Finally, the exponentiation operator (`^`) is used to raise the first operand to the power of the second operand.

