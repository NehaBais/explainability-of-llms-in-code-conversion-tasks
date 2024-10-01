Here's the JavaScript code that achieves the same functionality as the Rust code you provided:
```javascript
const fs = require('fs');
const path = require('path');
function mkdirp(dir) {
  const parts = dir.split(path.sep);
  for (let i = 1; i <= parts.length; i++) {
    const part = parts.slice(0, i).join(path.sep);
    if (!fs.existsSync(part)) {
      fs.mkdirSync(part);
    }
  }
}
try {
  mkdirp('./path/to/dir');
} catch (err) {
  console.error('An Error Occurred:', err);
}
```
This code uses the `fs` and `path` modules from Node.js to create a directory and any missing parents. It first splits the input path into parts using the platform-specific path separator, then iterates through each part, creating the directory if it doesn't exist. The `try-catch` block handles any errors that may occur during the execution of the function.

