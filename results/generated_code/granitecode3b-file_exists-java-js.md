Sure! Here's the equivalent code in JavaScript:
```javascript
// Check if the current working directory exists
const fs = require('fs');
const exists = fs.existsSync('docs/input.txt');
console.log(exists);
// Check if a file and a directory in the filesystem root exist
const exists2 = fs.existsSync('/docs/input.txt');
console.log(exists2);
```
Note that we're using the `fs` module to check for the existence of files and directories in Node.js, which is similar to Java's `File` class. The `existsSync()` method returns a boolean value indicating whether the specified file or directory exists.

