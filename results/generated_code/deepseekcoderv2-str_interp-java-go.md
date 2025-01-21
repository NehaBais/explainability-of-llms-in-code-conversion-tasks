 Sure! Below is the equivalent code in Golang for the given Java code:

```go
package main

import (
	"fmt"
)

func main() {
	adjective := "little"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt.Println(lyric)
}
```

In this Go code:
- We define the variable `adjective` with the value `"little"`.
- We use the `fmt.Sprintf` function to perform string interpolation, replacing the placeholder `%s` in the template string with the value of `adjective`.
- Finally, we print the interpolated string using `fmt.Println`.
