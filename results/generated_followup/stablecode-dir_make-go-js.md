The error in this code is that there's an unexpected token ')'. The problem occurs because the if condition is written incorrectly, causing a syntax error due to the mismatched parentheses.

To fix this issue, we need to correct the syntax of the if condition and ensure proper indentation.

Here's the corrected code:

```js
const fs = require('fs');

function createDirectory(path) {
  try {
    if (!fs.existsSync(path))) {
      fs.mkdirSync(path, { recursive: true }));
      console.log(`Directory ${path}} was created successfully`);
    } else {
      console.log(`Directory ${path}} already exists`);
    }
  } catch (err) {
    if (err.code === 'ENOENT') {
      fs.mkdirSync(path, { recursive: true }));
      console.log(`Directory ${path}} was created successfully`);
    } else throw err;
  }
}
```

This corrected code should now execute without any syntax errors.
