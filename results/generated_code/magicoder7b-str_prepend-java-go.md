 In Go, you can achieve this by using the `+` operator as well. Here is how you would implement it:

```go
package main
import "fmt"

func main() {
	var stringVar = "def"
	stringVar = "abc" + stringVar 
	fmt.Println(stringVar)
}
```
When the above code is executed, it will prepend `abc` to the original value of `stringVar`, resulting in `"abcdef"` and print that result on the console.
