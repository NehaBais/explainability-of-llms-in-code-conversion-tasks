The equivalent Golang code for the given Java program would be as follows:

```go
package main

import (
    "fmt"
)

func main() {
    adjective := "little"
    lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
    fmt.Println(lyric)
}
```
In Golang, the `%s` is used to denote string interpolation and it takes two arguments: the format string (`"Mary had a %s lamb"`) and the values that need to be inserted into the string (`adjective` and `lamb`). The `Sprintf()` function is called with these parameters to perform the interpolation, replacing the placeholders with the supplied values.

This code prints "Mary had a little lamb" to the console when run.
