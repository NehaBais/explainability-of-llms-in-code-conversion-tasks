```javascript
const fs = require('fs');

try {
  const size1 = fs.statSync('./input.txt').size;
  console.log(size1);

  const size2 = fs.statSync('/input.txt').size;
  console.log(size2);
} catch (err) {
  console.error(err);
}
```
This JavaScript code uses the Node.js file system module (`fs`) to achieve the same functionality as the original C code. 

It's important to note that this script must be run in a Node.js environment, since it relies on Node.js's built-in `fs` module for its file system operations.

Also, the error handling is done using try-catch blocks to handle potential errors when working with filesystem operations.
