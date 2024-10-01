In Golang, you can use the `fmt.Sprintf` function for string interpolation. Here is how to write your code:

```go
package main

import "fmt"

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```
In this Golang code, we use `%s` as a placeholder for the variable `extra`. The function `fmt.Sprintf` will replace `%s` with the value of `extra`, resulting in the string "Mary had a little lamb." being printed to the console.
