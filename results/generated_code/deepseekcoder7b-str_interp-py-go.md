In Golang, you can use `fmt.Sprintf()` to achieve string interpolation similar to Python's formatted string literals (f-string). Here is how it could be translated into Go code:

```go
package main
  
import "fmt"

func main() {
    extra := "little"
    newStr := fmt<｜begin▁of▁sentence｜>Mary had a %s lamb.', extra)
    fmt.Println(newStr)
}
```
The `%s` in the string is replaced with the value of `extra` variable. The result will be printed to console as: `Mary had a little lamb.` . 

Please note that `fmt.Sprintf()` function returns formatted string, it does not print anything directly. If you want to output this interpolated string immediately, use `fmt.Println(newStr)` instead of assigning the result back into newStr variable. 

Also please replace <s> with %s as fmt.Sprintf is used for formating a string and it expects a format specifier but got: <s at the time of compilation that's why you are getting error, that can be corrected by replacing <s to %s in line 5.

