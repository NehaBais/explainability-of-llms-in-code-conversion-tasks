 In Golang, you can use the following code to create two string variables:
```go
package main
import "fmt"

func main() {
  var s = "hello"
  fmt.Println(s + " there!")
}
```
Here is a breakdown of what each line does:

* `var s = "hello"` - Declares a variable called `s` and initializes it to the string value `"hello"`.
* `fmt.Println(s + " there!")` - Prints the concatenation of `s` and the string literal `" there!"` to the console. The `+` operator is used to concatenate strings in Golang.

The output of this code would be:
hello there!
