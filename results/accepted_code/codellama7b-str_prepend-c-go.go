package main

import "fmt"
import "unsafe"

func main() {
	str := []byte("my String")
	cstr := []byte("Changed ")
	dup := unsafe.Slice(str)
	sprintf(str, "%s%s", cstr, dup)
	free(dup)
	fmt.Println(string(str))
}
