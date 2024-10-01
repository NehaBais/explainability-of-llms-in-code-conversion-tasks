Here's the equivalent code in Golang:
```
package main
import "fmt"
func print_logic(a, b bool) {
 fmt.Printf("a and b is %vn", a && b)
 fmt.Printf("a or b is %vn", a || b)
 fmt.Printf("not a is %vn", !a)
}
func main() {
 print_logic(true, false)
 print_logic(false, true)
 print_logic(false, false)
}
```
The function `print_logic` takes two logical values as arguments and uses the logical operators `&&`, `||`, and `!` to perform "and", "or", and "not" operations on them. The output is printed using the `fmt` package. The `main` function calls the `print_logic` function with different boolean values to demonstrate its usage.

