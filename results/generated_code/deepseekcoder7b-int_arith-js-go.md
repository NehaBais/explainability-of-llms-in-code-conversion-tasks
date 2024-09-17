Here is the equivalent Go code for your JavaScript code:

```Go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	a, _ := strconv.Atoi(os.Args[1]) // Ignoring error handling here as it's already in the JS code. 
	b, _ := strconv.Atoi(os.Args[2])

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b // Integer division (rounded towards zero) since Go will automatically convert int to float64 when necessary
	remainder := a % b 

	fmt.Printf("a + b = %d\n", sum)  
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b (rounded towards zero)= %d, remainder is %d\n", division, remainder) // Indicate quotient rounding and the sign of the remainder 
}
```

Please note that Go does not have a built-in operator for exponentialiation. You would need to use the `math` package's function `math.Pow(a, b float64)` instead if you want this feature.

