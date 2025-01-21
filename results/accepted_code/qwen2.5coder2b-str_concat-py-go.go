package main

import (
	"fmt"
)

func main() {
    // declare a string variable s1 and assign it the value "hello"
    var s1 string = "hello"

    // print the concatenated result of s1 and " world"
    fmt.Println(s1 + " world")

    // re-assign the same value to s2
    s2 := s1 + " world"

    // print the result of s2
    fmt.Println(s2)

    // declare a string variable s3 and assign it a comma-separated list of values
    var s3 string = ", ".join([s1, "world", "mom"])

    // print the result of s3
    fmt.Println(s3)
}