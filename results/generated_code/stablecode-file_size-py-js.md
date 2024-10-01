Here is how you can convert this Python code to JavaScript:

```javascript
const fs = require('fs');

let size;
try {
  // Get the size of file in the current working directory.
  size = fs.promises.stat(__filename)).size;

  // Get the size of file in the root directory of this file system, assuming Node.js environment.
  const path = require('path').win32;
  size = fs.promises.stat(path.resolve('/', 'input.txt'))).size;
} catch (err) {
  console.error(err);
}
```
This JavaScript code does exactly the same as your Python code. It first tries to get the size of a file named "input.txt" in the current working directory, and another one in the root directory of this file system, assuming Node.js environment.
Please note that if the file 'input.txt' doesn't exist or there's an error (like permission issue), it will throw an error which you can catch to handle any potential errors.
