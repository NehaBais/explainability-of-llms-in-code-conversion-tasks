Sure, here's the converted code in Golang:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 myStrings := []string{"prepended to", "my string"}
 prepended := strings.Join(myStrings, "")
 fmt.Println(prepended)
}
```
Explanation:
In the original C++ code, we have a vector of strings called `myStrings` that contains two elements: "prepended to" and "my string". We want to prepend this string to another string literal, so we use the `std::accumulate()` function from the `` library to concatenate all the strings in `myStrings` into a single string.
In Golang, we can achieve the same result using the `strings.Join()` function. This function takes two arguments: a slice of strings and a separator character. In our case, we pass an empty string as the separator because we want to concatenate the strings without any delimiter. The output of this code will be "prependedtomy string", which is the desired result.

