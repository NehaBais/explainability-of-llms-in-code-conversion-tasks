Here's the Golang code that meets your requirements:
```go
package main
import "fmt"
func main() {
 str := "abc"
 fmt.Println(str)
 str += "def"
 fmt.Println(str)
}
``` 
This code creates a string variable `str` with the value `"abc"`, prints its contents, appends the string literal `"def"` to it using the `+=` operator, and then prints the updated contents of `str`. The output should be:

abc
abcdef

