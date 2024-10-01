In Go, string interpolation is done using the "%v" formatter inside of Printf function or Sprintf method. Here's your code translated into Golang:

```go
package main

import "fmt"

func main() {
  extra := "little"
  fmt.Printf("Mary had a %s lamb.\n", extra)
}
```

In this code, `%s` is the format specifier for string and `extra` is the variable that will replace it in the interpolated string. The `\n` at the end of the string is used to print a newline after the output.
