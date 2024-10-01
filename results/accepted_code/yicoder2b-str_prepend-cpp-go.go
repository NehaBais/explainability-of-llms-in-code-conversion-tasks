package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"} // Create a slice of strings.
	var prepended string = concatenate(myStrings)      // Invoke the `concatenate` function to prepend the values in myStrings.
	fmt.Println(prepended)                             // Print out the result.
}

func concatenate(strings []string) string { // Function to concatenate strings.
	var result = ""
	for _, str := range strings {
		result += str + " "
	}
	return result[:len(result)-1] // Remove the trailing space and return the result.
}
