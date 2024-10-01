package main

import (
    "fmt"
    "strings"
)

func main() {
    fmt.Println("
YUP == YUP:", strings.EqualFold("YUP", "YUP"))
    fmt.Println("BALL < BELL:", strings.Compare("BALL", "BELL") < 0)
    fmt.Println("24 > 123:", 24 > 123) // Numeric comparison for numeric strings is lexical
    fmt.Println(5 == 5.0)              // Comparison between two numbers will result in false, but the types are different, so it's not a string comparison
}