To convert this Python code to Golang, you can use the following solution:
```go
package main
import "fmt"
func main() {
    var str string = "12345678";
    str += "9!";
    fmt.Println(str)
}
```
In this solution, we declare a variable `str` of type `string` and initialize it with the value `"12345678"`. Then, we append the string literal `"9!"` to `str`, resulting in the final value of `"123456789!"`. Finally, we print the contents of `str` using the `fmt.Println()` function.
