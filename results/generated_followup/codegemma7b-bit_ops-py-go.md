The error occurs because the `import` statement is placed at the top of the file, outside of any package declaration. The fix is to move the `import` statement inside the `package` declaration.

```go
package main

import "fmt"
```
