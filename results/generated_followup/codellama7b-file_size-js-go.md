The error occurred because the `fmt` package is not imported, so Go does not know what to do with the `fmt.Println()` statements. To fix this, we need to import the `fmt` package at the top of the file, like this:
```go
import (
	"log"
	"os"
	"fmt" // <-- Add this line
)
```
Once we've done this, the code should compile and run correctly.
