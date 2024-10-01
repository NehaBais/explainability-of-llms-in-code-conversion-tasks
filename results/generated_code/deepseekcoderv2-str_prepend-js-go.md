```go
package main
import "fmt"
func main(){
   var s string = ", World" // Declare and initialize string variable s with value ", World"
   s = "Hello" + s          // Prepend the string variable s with another string literal "Hello", and assign it back to s
   fmt.Println(s)           // Print the updated value of s, which is now "Hello, World"
}
```