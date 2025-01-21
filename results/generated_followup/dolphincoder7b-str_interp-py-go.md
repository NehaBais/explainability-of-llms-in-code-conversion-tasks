The error occurs because the Go language does not support string interpolation. The escape sequence `%s` is used to substitute variables or values into placeholders in the original string. The `fmt.Sprintf()` function returns a formatted string, but it does not perform string interpolation. In Golang, we should use an alternative method, such as `fmt.Sprintf()`, to achieve the same functionality. 

Here's how you can fix the error:

1. Modify the code to use `fmt.Sprintf` instead of f-strings:
   ```go
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
   ```

2. Alternatively, you can use the `fmt.Sprintf()` function with backticks (`) as the delimiter for string interpolation:
   ```go
    fmt.Println(`Mary had a ${extra} lamb.`)
   ```

The corrected code is:
```go
package main
import "fmt"
func main()  {
  extra := 'little'
  newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
  fmt.Println(newStr)
}
```
