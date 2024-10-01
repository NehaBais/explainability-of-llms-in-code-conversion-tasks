Here is the equivalent code in Golang.

```go
package main

import "fmt"

func main() {
    s := "123456678"
    s = "0" + s // by concatenation
    fmt.Println(s)
}
```
This Golang program does the same thing as your Python script: It first declares a string `s` with the value `"123 456 78"`. Then it prepends this string with `"0"` and assigns it back to `s`. Finally, it prints the updated string.

The syntax of Go is very similar to that of Python. For example, both languages use the `+` operator for string concatenation. The only difference lies in the specific details of their respective syntaxes.
