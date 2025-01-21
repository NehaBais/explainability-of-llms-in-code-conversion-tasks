The error occurs because the `import` statement is placed outside of the `package` declaration. The fix is to move the `import` statement to the top of the file.

```go
package main

import "fmt"
```
