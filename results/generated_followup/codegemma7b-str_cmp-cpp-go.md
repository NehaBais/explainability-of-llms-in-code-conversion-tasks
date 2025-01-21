The error occurs because the `strconv` package is not imported. The fix is to add `import "strconv"` to the top of the file.

```go
import (
	"fmt"
	"strconv"
	"strings"
)

// ... rest of the code
```
