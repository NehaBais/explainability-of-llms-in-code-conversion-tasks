 In Golang, you can use the `fmt.Sprintf` function to perform string interpolation similar to Python’s f-strings functionality. Here is how you might translate your Python code into Go:

```go
package main

import (
    "fmt"
)

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```
