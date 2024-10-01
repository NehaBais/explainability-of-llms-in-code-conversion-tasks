Sure, here's the JavaScript code that performs the same task:
```javascript
const fs = require('fs');
console.log("input.txt is a regular file? " + fs.statSync('input.txt').isFile());
console.log("docs is a directory? " + fs.statSync('docs').isDirectory());
console.log("/input.txt is a regular file? " + fs.statSync('/input.txt').isFile());
console.log("/docs is a directory? " + fs.statSync('/docs').isDirectory());
```
The `fs` module in Node.js provides methods for interacting with the file system, including checking if a file or directory exists and whether it's a regular file or a directory. The `fs.statSync()` method returns a `stats` object that contains information about the file or directory, which can be used to check its type.

