
Here are the code conversions for each requirement:

```golang
package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3
	fmt.Println(str[n:n+m]) // => "cde"
	fmt.Println(str[n:]) // => "cdefgh"
	fmt.Println(str[:len(str)-1]) // => "abcdefg"
	fmt.Println(str[str.Index("b"):str.Index("b")+m]) // => "bcd"
	fmt.Println(str[str.Index("bc"):str.Index("bc")+m]) // => "bcd"
}
```

Note that the `substr` and `substring` functions in Go work on runes, not bytes, so they are more efficient for handling Unicode strings. Also, the `Index` function returns the index of the first occurrence of the specified substring within the string, or -1 if it's not found.
