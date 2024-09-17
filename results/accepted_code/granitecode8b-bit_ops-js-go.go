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