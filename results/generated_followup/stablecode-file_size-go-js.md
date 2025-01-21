The error is occurring because of an unexpected token ')' at `console.log(stat.size));`. To fix this issue, simply remove the closing parenthesis `)` from the line that's causing the syntax error.

Here is the corrected JavaScript code in a single code block:

```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(filePath) {
  fs.stat(filePath, (err, stat) => {
    if (err) {
      console.log(err);
    } else {
      console.log(stat.size));
    }
  })
}

printFileSize("input.txt"));
printFileSize(path.join("/"), "input.txt")));
```
