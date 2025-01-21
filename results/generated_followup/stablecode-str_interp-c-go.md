The error is caused by an unexpected closing parenthesis `)` at the end of the statement. 

To fix this, remove the extra closing parenthesis from line 11.

Here's the corrected code in a single code block:
```go
package main

import "fmt"

func main() {
    extra := "little"
    fmt.Printf("Mary had a %s lamb.\n", extra))
}
```
