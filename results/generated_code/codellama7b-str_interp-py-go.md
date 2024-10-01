To convert this code from Python to Go, you can use a similar technique as in the original code. You would define a variable `extra` with the value `'little'` and then use string interpolation to replace the `{extra}` placeholder in the original string with its value. The resulting output will be the new string `"Mary had a little lamb."`.

Here's the equivalent Go code:
```go
package main

import "fmt"

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```
