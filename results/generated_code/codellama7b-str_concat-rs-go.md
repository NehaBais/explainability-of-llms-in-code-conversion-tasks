 Here is a possible translation of the Rust code to Go:

```
package main

import "fmt"

func main() {
	s := "hello"
	fmt.Println(s)

	s1 := s + " world"
	fmt.Println(s1)
}
```
Note that in Go, strings are immutable by default, so the `+` operator will create a new string and assign it to `s1`. Also, the `to_owned` method is not needed in Go because strings are already mutable by default.
