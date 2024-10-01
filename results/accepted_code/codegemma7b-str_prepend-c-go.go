package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := fmt.Sprintf("%s%s", cstr, str)
	fmt.Println(dup)
}
