The error occurs because of incorrect usage of `fmt` package in Golang. The correct way to import it is "fmt" without any space or symbol around it. 

Here's the corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	adjective := "big"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
```

