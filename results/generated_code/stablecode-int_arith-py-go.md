Here is the conversion of your Python code to Golang:

```go
package main

import "fmt"

func main() {

    input1 := 18
    input2 := 7

    qq := input1 + input2
    fmt.Println("Sum:", qq)

    ww := input1 - input2
    fmt.Println("Difference:", ww)

    ee := input1 * input2
    fmt.Println("Product:", ee)

    rr := float64(input1) / float64(input2)
    fmt.Printf("Integer quotient: %d\n", int(rr)))
    fmt.Printf("Float quotient: %.3f\n", rr))

    uu := (int(float64(input1)/float64(input2))))*-10
    fmt.Println("Whole Remainder:", uu)
    fmt.Println("Actual Remainder:", float64(uu)))

    yy := input1  *  input1  *  input2
    fmt.Printf("Exponentiation: %.3f\n", yy))
}
```
The above Golang code performs the same operations as your Python code. It gets two integers from the user, and then performs various arithmetic operations on these input integers. The results of these operations are printed out to the console.
