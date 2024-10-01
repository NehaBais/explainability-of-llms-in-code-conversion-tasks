In Golang, you can use the `fmt.Sprintf` function for string interpolation. Here's how it would look like:

```go
package main

import "fmt"

func main() {
	adjective := "little"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
```

In this Go code, `fmt.Sprintf` is used to format and print the string with the adjective variable being replaced in the string interpolation.
