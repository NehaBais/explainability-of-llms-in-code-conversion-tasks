In JavaScript, you can use the `fs.renameSync()` method to rename files and directories:

```javascript
const fs = require('fs');

// Rename a file in the current working directory
fs.renameSync('./input.txt', './output.txt');

// Rename a directory in the current working directory
fs.renameSync('./docs', './mydocs');

// Rename a file in the root directory
fs.renameSync('/input.txt', '/output.txt');

// Rename a directory in the root directory
fs.renameSync('/docs', '/mydocs');
```

Please note that Node.js requires permissions to access and rename files/directories, so make sure you're running your script with the necessary privileges. Also, keep in mind that the path for root directory starts with a forward slash (/) for Unix-based systems, or a drive letter (like C:\) for Windows.
