The error occurs because of incorrect usage of `fmt.Sprintf` function. The format specifier (the %s) is outside the quotation marks which makes Go compiler to interpret it as an invalid character identifier. 

Here's how you fix it:

```go
package main
  
import "fmt"

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```
This code works as expected and prints: `Mary had a little lamb.`

