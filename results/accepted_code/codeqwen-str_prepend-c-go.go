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
