To convert the given C++ code to Golang, you would use Go's built-in string manipulation functions. The `strings.Join` function can be used to concatenate all elements of a slice into a single string. Here is how you could do it:

```go
package main

import (
    "fmt"
)

func main() {
    myStrings := []string{"prepended to", "my string"}
    prepended := strings.Join(myStrings, "")
    fmt.Println(prepended)
}
```

In this code:
- The `strings.Join` function takes two arguments: the slice of strings (`myStrings`) and a separator (in this case, an empty string `""`).
- It concatenates all the elements in the slice into one single string.
- Finally, it prints out the resulting string.
