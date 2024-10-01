Here's a JavaScript implementation of the code you provided:
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
mkdirp('./path/to/dir');
```
This implementation uses the `fs` and `path` modules in Node.js to create a directory and any missing parents. It splits the input path into its components using the platform-specific path separator, then iterates through each component, checking if it exists as a file or directory. If it doesn't exist, it creates it using `mkdirSync()`.
This will create the directory and any missing parents.

