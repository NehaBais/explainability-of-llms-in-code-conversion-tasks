Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"unsafe"
)

func main() {
	str := "my String"
	cstr := "Changed "

	// Create a slice from the C-style string
	cs := C.CString(str)

	// Append the C-style string to the Go slice and convert it back to a Go string
	newStr := cstr + C.GoString(cs)

	// Free the memory allocated for the C-style string
	C.free(unsafe.Pointer(cs))

	fmt.Println(newStr)
}
```

Note: This code will not behave exactly like the original C code. The `sprintf` function is used in the original code to concatenate two strings together, but Golang does not have a direct equivalent to this. Instead, it uses the `+` operator to concatenate the strings. Also, the C library's `strdup()` function was replaced with Go's `C.GoString()`.

It's important to note that in Go, you are responsible for managing memory manually, so we need to free the memory allocated for the C-style string using `C.free(unsafe.Pointer(cs))`. The `unsafe` package is used here to convert a pointer from C to Go because it's not safe to use pointers directly in Go code.
