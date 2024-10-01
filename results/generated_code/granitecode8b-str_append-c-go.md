Here's the Golang code that meets your requirements:
```go
package main
import "fmt"
func main() {
 str := "Good Morning"
 str += " to all" + " !!!"
 fmt.Println(str)
}
``` 
The `+=` operator is used to append the second string literal to the end of the first string variable, and the result is stored back in the first string variable. The third string literal is then appended to the end of the resulting string using the `+` operator. Finally, the contents of the string variable are printed to the console using the `fmt.Println()` function.

