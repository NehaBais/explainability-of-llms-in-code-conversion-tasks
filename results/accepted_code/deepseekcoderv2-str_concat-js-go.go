package main

import (
	"fmt"
)

func main() {
	originalString := "Original String."
	fmt.Printf("The original string is: %s\n", originalString)
	newString := fmt.Sprintf("%s new appended.", originalString) // The Sprintf function returns a formatted string, which is assigned to the variable "newString".
	fmt.Println(newString)                                       // Println prints out the value of this string on one line
}
