package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3
	fmt.Println(str[n : n+m])                             // => "cde"
	fmt.Println(str[n:])                                  // => "cdefgh"
	fmt.Println(str[:len(str)-1])                         // => "abcdefg"
	fmt.Println(str[str.Index("b") : str.Index("b")+m])   // => "bcd"
	fmt.Println(str[str.Index("bc") : str.Index("bc")+m]) // => "bcd"
}
