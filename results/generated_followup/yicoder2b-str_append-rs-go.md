The error `/tmp/yicoder2b-str_append-rs-go.go:4:2: "fmt" imported and not used` is caused by using the "fmt" package in Rust, but it's not being used. The `println!("{}", hello.add("!!!!"))` statement is using the `add()` method from the String type which doesn't exist in Go.

The corrected Golang code is:

```go
package main

import (
	"fmt"
)

func main() {
	hello := "Hello world"
	println(appendString(hello, "!!!!"))
}

func appendString(s string, suffix string) string {
	return s + suffix
}
```
This code will output the same result as the original Rust program. 

If you wish to include a "!!!!" postfix in your output via Go, you can modify `println` to `fmt.Println`.