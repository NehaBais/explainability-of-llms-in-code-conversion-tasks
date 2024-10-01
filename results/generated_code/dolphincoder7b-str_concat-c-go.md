This is a simplified version of the C code that you provided. Here is how we can convert it to Golang:

```go
package main

import (
    "fmt"
    "strings"
)

func sconcat(s1 string, s2 string) string {
    return strings.Join([]string{s1, s2}, "")
}

func main() {
    s := "hello"
    
    // Option 1: using printf
    fmt.Printf("%s literal\n", s)

    // Option 2: using + operator
    fmt.Printf("%s%s\n", s, " literal")

    // Concatenating the string
    s2 := sconcat(s, " literal")
    fmt.Println(s2)
}
```

Explanation:
- The `strings.Join` function in Golang is used to concatenate strings. It is more efficient than using the `+` operator in some scenarios and provides a better string management experience.
- By default, `fmt.Printf` uses `%v` as the formatter for outputting any type. You can use other format specifiers like `%s` for string values or use the `+` operator to concatenate strings within the same `fmt.Printf` call.
- The `free(s2)` line is not present in Golang, but it's always good practice to free memory when you are done using it. In this case, we used `defer` to ensure that the memory is freed after our program finishes executing.

Please note that these are simplified examples and may not cover all C code scenarios perfectly. You might need to make changes based on your specific requirements.
