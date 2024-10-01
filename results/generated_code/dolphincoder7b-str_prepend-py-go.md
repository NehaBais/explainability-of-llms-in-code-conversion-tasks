To convert the given Python code to Golang, we can create a Go program and use the `fmt` package for printing. Here is the equivalent Golang code:

```go
package main
import "fmt"
func main() {
    s := "12345678"
    s = "0" + s   // by concatenation
    fmt.Println(s)
}
```

By executing this program, you will get the output as:

012345678


Please note that Golang does not support string literals with multiple lines, so we cannot directly write multi-line strings in the code like Python does. However, if we need to include a multi-line string, you can concatenate them using `+` operator.

package main
import "fmt"
func main() {
    s := `12345678
          abcdefg`
    fmt.Println(s)
}

This will print the following output:

12345678
          abcdefg

