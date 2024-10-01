Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"} // Create a slice of strings.
	var prepended string = concatenate(myStrings)       // Invoke the `concatenate` function to prepend the values in myStrings.
	fmt.Println(prepended)                           // Print out the result.
}

func concatenate(strings []string) string {        // Function to concatenate strings.
	var result = "" 
	for _, str := range strings {
		result += str + " " 
	}
	return result[:len(result)-1]                   // Remove the trailing space and return the result.
}
```

In Golang, arrays (like `myStrings` in the C++ example) are replaced with slices, which are dynamic arrays that can contain multiple different types of values. Also, we used a range loop (`for _, str := range strings`) instead of `std::accumulate()` in C++. The function `concatenate` is defined to concatenate all the elements of the slice into a single string with each element separated by space.
