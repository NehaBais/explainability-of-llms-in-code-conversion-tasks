Here's the code converted to Golang:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 str1 := "abcd"
 str2 := "ab"
 // Determining if the first string starts with second string
 fmt.Println(strings.HasPrefix(str1, str2)) //returns True
 // Determining if the first string contains the second string at any location
 fmt.Println(strings.Contains(str1, str2)) //returns False
 loc := strings.Index(str1, str2)
 fmt.Println(loc) //returns 0
 loc = strings.Index(str1, str2, loc+1)
 fmt.Println(loc) //returns -1
 // Determining if the first string ends with the second string
 fmt.Println(strings.HasSuffix(str1, str2)) //returns False
}
```

