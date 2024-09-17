package main
import (
 "fmt"
)
func main() {
 a := 10
 b := 3
 fmt.Printf("a AND b: %dnn", a&b)
 fmt.Printf("a OR b: %dnn", a|b)
 fmt.Printf("a XOR b: %dnn", a^b)
 fmt.Printf("NOT a: %dnn", ^a)
 fmt.Printf("a << b: %dnn", a<<b) // left shift
 fmt.Printf("a >> b: %dnn", a>>b) // arithmetic right shift
 fmt.Printf("a >>> b: %dnn", a>>>b) // logical right shift
 fmt.Printf("a rol b: %dnn", (a << uint(b)) | (a >> uint(32-b))) // rotate left, Go 1.5+
 fmt.Printf("a ror b: %dnn", (a >>> uint(b)) | (a << uint(32-b))) // rotate right, Go 1.5+
}