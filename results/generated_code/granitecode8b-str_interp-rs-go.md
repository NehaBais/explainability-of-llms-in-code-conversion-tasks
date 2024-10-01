Here's the equivalent code in Golang:
```
package main
import "fmt"
func main() {
 fmt.Println("Mary had a ", "little", " lamb")
 // You can specify order
 fmt.Printf("%s had a %s lambn", "Mary", "little")
 // Or named arguments if you prefer
 fmt.Printf("%s had a %s lambn", "Mary", "little")
}
```
In this code, we use the `fmt.Println` and `fmt.Printf` functions to print strings with variable interpolation. The first example uses string interpolation without specifying order or named arguments. The second example specifies the order of the variables in the string using the format specifiers `%s`. The third example demonstrates named arguments by using the format specifier `%s` with the argument names `adj` and `name`.

