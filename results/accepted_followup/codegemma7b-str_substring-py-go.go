package main

import "fmt"
import "strings"

s := "abcdefgh"
n, m, char, chars := 2, 3, "d", "cd"

fmt.Println(s[n-1 : n+m-1])
fmt.Println(s[n-1:])
fmt.Println(s[:len(s)-1])
idx := strings.Index(s, char)
fmt.Println(s[idx : idx+m])
idx := strings.Index(s, chars)
fmt.Println(s[idx : idx+m])