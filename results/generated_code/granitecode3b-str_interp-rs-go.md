Sure, here's the equivalent Golang code for the given Rust code:
```
package main
import "fmt"
func main() {
 fmt.Println("Mary had a ", "little", " lamb")
 // You can specify order
 fmt.Println(" ", "little", " had a Mary lamb")
 // Or named arguments if you prefer
 fmt.Println("name=Mary adj=little", "lamb")
}
```
The Golang code is similar to the Rust code in terms of functionality, but there are some differences in syntax and usage. In Golang, string interpolation is done using curly braces `{}` and values or variable names can be enclosed within them. The order of arguments can also be specified as shown in the Rust code.

