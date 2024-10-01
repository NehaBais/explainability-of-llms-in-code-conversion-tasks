package main

import (
	"fmt"
)

func main() {

    // Part 1 
    fmt.Println("Does 'abcd' start with 'ab'? ", "abcd".StartsWith("ab"))

    // Part 2 
    fmt.Println("Does 'abcd' contain 'bb'? ", "abcd".Contains("bb"))
    fmt.Println("Does 'abab' contain 'ab'? ", "abab".Contains("ab"))
    loc := -1
    loc = strings.Index("abab", "bb") //returns -1
    loc = strings.Index("abab", "ab", loc+1)) // returns 2
}