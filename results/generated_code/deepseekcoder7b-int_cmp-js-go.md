The following code is written in Golang. It does pretty much exactly what your JavaScript functions do, but Golang handles user inputs a little differently than JavaScript would so you'll need to add an additional step for that part. 

```go
package main

import (
	"fmt"
)

func compare(a int, b int){
	if a == b {
		fmt.Println(a,"equals",b)
	} 
	if a < b {
		fmt.Println(a,"is less than",b)
	}
	if a > b {
		fmt.Println(a,"is greater than",b)
	}
}

func main() {
	var a int // Replace with user input method in your program 
    var b int // Replace with user input method in your program
    
	compare(a, b)
}
```
The Golang standard libraries do not include a scan function for integers like JavaScript's prompt. You would need to add additional steps in the main() function to get user inputs and feed them into the compare() function. This has been left out of this code as it's specific to your program implementation. The `compare` function will work with any two integers you pass to it.

