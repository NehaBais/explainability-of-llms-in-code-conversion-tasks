package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"
	replaced := fmt.Sprintf(original, little) // uses string interpolation to replace X with little
	fmt.Println(replaced)                     // prints Mary had a little lamb
}
