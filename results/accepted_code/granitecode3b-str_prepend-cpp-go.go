package main

import (
	"fmt"
	"strings"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := strings.Join(myStrings, "")
	fmt.Println(prepended)
}
