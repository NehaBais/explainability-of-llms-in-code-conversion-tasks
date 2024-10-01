In GoLang, you can use the `fmt` package for string interpolation (formatted printing). Here's your Java code converted to Golang:

```Go
package main

import "fmt"

func main() {
    adjective := "little"
    lyric := fmt.Sprintf("Mary had a %s lamb", adjective))

    fmt.Println(lyric)
}
```
This code will print: `Mary had a little lamb`
