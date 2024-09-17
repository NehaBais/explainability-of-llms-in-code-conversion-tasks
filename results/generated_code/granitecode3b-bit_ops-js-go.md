Here's the equivalent Golang code for the given JavaScript function:
```go
func bitwise(a, b int) {
  fmt.Println("a AND b:", a&b)
  fmt.Println("a OR b:", a|b)
  fmt.Println("a XOR b:", a^b)
  fmt.Println("NOT a:", ^a)
  fmt.Println("a << b:", a<<b) // left shift
  fmt.Println("a >> b:", a>>b) // arithmetic right shift
  fmt.Println("a >>> b:", a>>uint(b)) // logical right shift
}
```
Note that in Golang, the `>>` operator performs both an arithmetic and logical right shift, so we use `uint(b)` to ensure that the logical shift is performed. Also note that the Golang bitwise AND (`&`), OR (`|`), and XOR (`^`) operators have different meanings than their JavaScript counterparts. In JavaScript, they act as bitwise operations (i.e., they treat the operands as binary numbers), while in Golang, they act as logical operations (i.e., they treat the operands as boolean values). Therefore, `a & b` will evaluate to 1 if both `a` and `b` are non-zero, and 0 otherwise, while in JavaScript it would return a bitwise AND of `a` and `b`. Similarly for OR and XOR.

