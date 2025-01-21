In Go, the equivalent code would look like this:

```go
package main

import (
	"fmt"
)

func main() {
    // declare a string variable s1 and assign it the value "hello"
    var s1 string = "hello"

    // print the concatenated result of s1 and " world"
    fmt.Println(s1 + " world")

    // re-assign the same value to s2
    s2 := s1 + " world"

    // print the result of s2
    fmt.Println(s2)

    // declare a string variable s3 and assign it a comma-separated list of values
    var s3 string = ", ".join([s1, "world", "mom"])

    // print the result of s3
    fmt.Println(s3)
}
```

Note: `join` function in Go is used to concatenate multiple strings into one. However, Go's standard library doesn't have a built-in join function like Python, and `strings.Join` method was not available until Go 1.18. So you might need to implement it yourself or find an appropriate package for your version of Go.

Also, the `.join()` function is called on slices of type string in Go, so you would do this:


s3 := strings.Join([]string{s1, "world", "mom"}, ", ")
fmt.Println(s3)


Or using the `strings.Builder` type from the same package for better performance when dealing with many concatenations:


var builder strings.Builder
for _, value := range []string{s1, "world", "mom"} {
    builder.WriteString(value)
    if value != s3[len(s3)-1] {
        builder.WriteRune(',')
    }
}
fmt.Println(builder.String())


Please note that the `.join()` function is not available in Go 1.18 or earlier versions, so you would need to implement it yourself or find an appropriate package for your version of Go.
