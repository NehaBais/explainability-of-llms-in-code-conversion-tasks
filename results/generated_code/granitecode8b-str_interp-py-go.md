Here's the equivalent code in Golang:
```go
package main
import "fmt"
func main() {
 extra := "little"
 newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
 fmt.Println(newStr)
}
```
The `fmt.Sprintf` function in Golang is used for string interpolation. It takes a format string as its first argument and any number of additional arguments that correspond to the placeholders in the format string. In this example, the `%s` placeholder is replaced by the value of the `extra` variable. The resulting string is then printed to the console using `fmt.Println`.

