In Golang, you can use the `fmt.Sprintf()` function to interpolate strings. Here is how you can rewrite your Python code in Golang:

```go
package main

import "fmt"

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```

This Go code does exactly the same thing as your Python code. It defines the `extra` variable and uses it to interpolate the string. The `%s` in `fmt.Sprintf()` is a placeholder for a string value, which will be replaced by the actual value of `extra`.
