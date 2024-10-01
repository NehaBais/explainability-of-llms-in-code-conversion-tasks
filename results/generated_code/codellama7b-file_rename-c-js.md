In JavaScript, you can use the `fs` module to interact with the file system. Here's an example of how you could achieve the same functionality as the given C code in JavaScript:
```
const fs = require('fs');

// Rename "input.txt" to "output.txt" in the current working directory
fs.renameSync('input.txt', 'output.txt');

// Rename "docs" to "mydocs" in the current working directory
fs.renameSync('docs', 'mydocs');

// Rename "/input.txt" to "/output.txt" in the root of the file system
fs.renameSync('/input.txt', '/output.txt');

// Rename "/docs" to "/mydocs" in the root of the file system
fs.renameSync('/docs', '/mydocs');
```
Note that `fs.renameSync` is a synchronous function, so it will block the execution of the program until the rename operation is complete. If you want to perform multiple renames asynchronously, you can use `fs.rename` instead, which returns a promise that resolves when the rename operation is complete.
