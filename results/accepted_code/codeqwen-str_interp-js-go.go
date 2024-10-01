package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := fmt.Sprintf("%v", original, little) // changes the original string
	fmt.Println(replaced)
}
