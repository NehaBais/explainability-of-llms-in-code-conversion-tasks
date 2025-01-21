Error: `undefined: os`

Fix: `import "os"`

Corrected Code:
```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)
...
```
