package main

import (
	"fmt"
	"strings"
)

func main() {
	s := &strings.Builder{} // Initialize a new strings.Builder instance
	s.WriteString("foo")    // Append "foo" to the instance
	s.WriteString("bar")    // Append "bar" to the instance
	fmt.Println(s.String())  // Print the instance as a string
}