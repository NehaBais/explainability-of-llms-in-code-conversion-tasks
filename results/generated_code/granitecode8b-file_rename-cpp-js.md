Here's the JavaScript code that achieves the same requirement as the given C++ code:
```javascript
const fs = require('fs');
// Rename a file in the current working directory
fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');
// Rename a file in the filesystem root
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```
This code uses the `fs` module in Node.js to rename files and directories. The `renameSync()` method is used to perform the renaming operation synchronously, meaning that it will wait for the operation to complete before proceeding to the next line of code. 
Note that the paths specified in the `renameSync()` method should be relative to the current working directory or the root directory if they are absolute paths. Also, make sure you have the necessary permissions to perform file and directory renaming operations on your system.

