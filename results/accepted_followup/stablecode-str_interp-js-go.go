package main

import (
		"fmt"
	)

func main() {

    original := "Mary had a X lamb."
    little := "big"
    replaced := fmt.Sprintf("%s %s", original, little))
	
	fmt.Println(replaced)

}