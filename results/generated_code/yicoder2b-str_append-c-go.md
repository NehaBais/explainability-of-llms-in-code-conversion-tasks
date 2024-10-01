Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := "!!!"
	if len(str)+len(cstr)+len(cstr2) > cap(str) {
		// method 1
		str += cstr

		// method 2
		x := len(str)
		str = str[0:x] + fmt.Sprintf("%s", cstr2)
	}
	fmt.Println(str) // prints "Good Morning to all!!!"
}
```
In Golang, string concatenation is slightly different from C or other languages. When you append into a string using '+=' operator in Go, the original string itself will be modified and new content of the appended string does not get copied but directly appended at the end of the original string. That's why it can cause issues if your original string is not big enough. In such cases we need to allocate a bigger buffer or realloc the existing one.

Also note that the method 2 will overwrite part of the original string, and you have to keep track of this if you want to preserve the original content. For method 1, there's no overwriting involved so it's simpler but more prone to errors if your original buffer is not big enough for the new string.
