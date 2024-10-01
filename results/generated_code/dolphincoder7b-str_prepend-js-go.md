To convert the JavaScript code to Golang, you can use a similar concept using `fmt` package and `os` package. Here's how it would look like in Golang:

```go
package main
import "fmt"
func main() {
    s := ", World"
    s = fmt.Sprintf("Hello%s", s)
    fmt.Println(s);
}
```

In this code, the variable `s` is initialized with a string value of ", World". The `%s` format specifier is used in the `fmt.Sprintf()` function to insert the value of `s` into the formatted string. Finally, the resultant string is printed using the `Println()` function from the `fmt` package.

This approach allows for dynamic generation and manipulation of strings.
