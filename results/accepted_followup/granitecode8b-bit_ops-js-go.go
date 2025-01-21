package main
import "fmt"
func bitwise(a, b int) {
 fmt.Printf("a AND b: %dn", a&b)
 fmt.Printf("a OR b: %dn", a|b)
 fmt.Printf("a XOR b: %dn", a^b)
 fmt.Printf("NOT a: %dn", ^a)
 fmt.Printf("a << b: %dn", a<<b) // left shift
 fmt.Printf("a >> b: %dn", a>>b) // arithmetic right shift
 fmt.Printf("a >>> b: %dn", a>>>b) // logical right shift
}