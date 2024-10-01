package main
import "fmt"
func printLogic(a bool, b bool) {
 fmt.Printf("a and b is %v\n", a && b)
 fmt.Printf("a or b is %v\n", a || b)
 fmt.Printf("not a is %v\n", !a)
}
func main() {
 printLogic(true, true) // Output: a and b is true 
a or b is true 
not a is false 
 a and b is false 
a or b is true 
not a is true