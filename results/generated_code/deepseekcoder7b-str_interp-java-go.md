In Golang, you can use `fmt.Sprintf()` function to achieve string interpolation which is similar to Java's `String.format()` method. Here is how you could convert the given code snippet from Java to Go:

```go
package main

import (
	"fmt"
)

func main() {
	adjective := "big"
	lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
	fmt<｜begin▁of▁sentence｜>ln(lyric)
}
```
In the above Go code, `%s` is used as a placeholder for the variable `adjective` in `fmt.Sprintf()` function which will be replaced by its actual value i.e., "big". 

So after running this code, it will print: `Mary had a big lamb`. In simple words, string interpolation has been performed and resulted in the required output.

