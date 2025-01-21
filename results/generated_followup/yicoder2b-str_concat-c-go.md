The error occurs because Go does not allow to concatenate strings without using any format specifiers or `printf`-style functions, which accept at least one string argument as a format string. The given C program uses the `sconcat` function to achieve this task and then prints it out by `puts()` function but Golang doesn't support that.

In Golang, you have to concatenate strings directly like so:
```go
package main

import (
    "fmt"
)

func main() {
    s1 := "hello"
    s2 := " literal"
    s3 := s1 + s2
    fmt.Println(s3)
}
```
In this code, we concatenate `s1` and `s2` directly without using any printf-style function or format specifiers. The output will be `hello literal` as expected.
