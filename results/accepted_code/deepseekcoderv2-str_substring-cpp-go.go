package main

import (
    "fmt"
    "strings"
)

func main() {
    const n = 3
    const m = 4
    c := '2'
    sub := "456"

    s := "0123456789"
    fmt.Println(s[n : n+m])
    fmt.Println(s[n:])
    fmt.Println(strings.TrimRight(s, string(rune(s[len(s)-1])))
    fmt.Println(s[strings.IndexRune(s, rune(c)) : strings.IndexRune(s, rune(c))+m])
    fmt.Println(s[strings.IndexRune(s, rune(sub[0])) : strings.IndexRune(s, rune(sub[0]))+m])
}