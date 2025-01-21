To convert the given C code to JavaScript, you can use the `fs` module in Node.js. Here is how you can do it:

```javascript
const fs = require('fs');

// First directory and file operations
fs.renameSync('./input.txt', './output.txt');
fs.renameSync('./docs', 'mydocs');

// Second directory and file operations
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```

In this JavaScript code:
- `fs.renameSync` is used to perform synchronous renaming of files and directories. The first argument is the current path, and the second argument is the new path.
- The paths are specified using Unix-style `/` separator instead of Windows-style `\`.

This script will rename the files and directories specified in your original C code when executed.
