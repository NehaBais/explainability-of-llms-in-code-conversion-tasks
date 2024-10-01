 Here is the Rust code converted to Go:

```go
 func main() {
 	hello := "Hello world" + "!!!"
 	fmt.Println(hello)
 }
```
 The first way of appending a string in Rust is to use the `+` operator, which concatenates two strings together. In Go, this can be achieved by using the `+` operator as well. The second way of appending a string in Rust is to use the `push_str()` method, which adds a string to the end of an existing string. In Go, this can be achieved by using the `+=` operator.

Here's how you can convert the code to Go:

package main
import "fmt"
func main() {
	hello := "Hello world!!!"
	fmt.Println(hello)
}
