package main

import (
	"fmt"
)

func main() {

    original := "Mary had a X lamb."
    little := "big"
    replaced := fmt.Sprintf("%s %s %s", original, little, little))
	
	fmt.Println(replaced)
	
}