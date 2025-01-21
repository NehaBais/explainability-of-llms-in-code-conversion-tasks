The error in the C++ code is that it includes an unnecessary header file, `iostream`, which conflicts with the standard library header file included by default in Go. The fix for this error is to remove the unnecessary header file from the C++ code.

The corrected code can be written as follows:

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, world!")
}
```

