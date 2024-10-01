package main

import (
	"fmt"
)

func main() {
	variable := "little" // Variable
	var originalString string = "Mary had a %s lamb."
	fmt.Printf("Original String: %s \n", originalString)
	fmt.Printf("%s\n", fmt.Sprintf(originalString, variable)) // Converted Code
}
