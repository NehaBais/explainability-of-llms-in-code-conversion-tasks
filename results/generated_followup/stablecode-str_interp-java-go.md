The error in this case is due to an incorrect syntax while declaring a variable in GoLang. The correct way to declare a variable in GoLang, as per the requirement given, is:
```go
package main

import "fmt"

func main() {
    adjective := "little"
    lyric := fmt.Sprintf("Mary had a %s lamb", adjective))

    fmt.Println(lyric)
}
```
This corrected code will print: `Mary had a little lamb` as expected.
