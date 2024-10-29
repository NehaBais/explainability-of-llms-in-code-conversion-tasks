In Go language, the equivalent code would be:

```go
package main

import "fmt"

func main() {
    extra := "little"
    fmt.Printf("Mary had a %s lamb.\n", extra)
}
``` 

Please note that in Go, you don't need to specify the format specifiers such as `%s` when using Printf, because they are inferred by the data type. In this case, since we have used string variable 'extra', it will be automatically understood as a %s (string). Also, unlike C, Go requires an explicit newline character ('\n') to print all output in one line.

