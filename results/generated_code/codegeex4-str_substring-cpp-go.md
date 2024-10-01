```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(strings.Substring(s, n, n+m))
	fmt.Println(strings.Substring(s, n))
	fmt.Println(strings.TrimSuffix(s, "9"))
	if i := strings.Index(s, string(c)); i >= 0 {
		fmt.Println(strings.Substring(s, i, i+m))
	}
	if i := strings.Index(s, sub); i >= 0 {
		fmt.Println(strings.Substring(s, i, i+m))
	}
}
```
Please note that Go string handling isn't as straightforward as C++. The `strings` package in Go provides basic functions like slicing and trimming, but it doesn't have a direct equivalent to the C++ `substr` function. Also, the `string` type in Go is UTF-8 encoded.

Also please be aware that Go index of strings starts from 0, unlike C++, which starts from 1. 

The code may not perfectly match your requirement due to these differences, but it shows how you could accomplish a similar task in Golang.
