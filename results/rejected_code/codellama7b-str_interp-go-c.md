package main

import (
	"fmt"
	"github.com/davecgh/go-spew/spew"
)

func main() {
	var str string = "Mary had a %s lamb"
	var txt string = "little"
	out := fmt.Sprintf(str, txt)
	fmt.Println(out)
}
