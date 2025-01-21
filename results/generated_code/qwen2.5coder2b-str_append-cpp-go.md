In Go, you can achieve the same functionality by using string concatenation directly. Here is how you would write your code:

```go
package main

import (
    "fmt"
)

func main() {
    greeting := "Hello"
    greeting += ", world!"
    fmt.Println(greeting)
}
```

When you run this program, it will output:


Hello , world!


This is the most idiomatic way to concatenate two strings in Go.
