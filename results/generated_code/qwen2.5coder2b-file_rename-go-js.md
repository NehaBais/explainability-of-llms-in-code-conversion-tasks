To convert the provided Go code to JavaScript, you can use the `fs` module which provides an interface for interacting with the file system.

Here's how you can implement it:

```javascript
const fs = require('fs');

// Rename files in current working directory and filesystem root
function renameFiles() {
  fs.renameSync('input.txt', 'output.txt');
  fs.renameSync('docs', 'mydocs');
  fs.renameSync('/input.txt', '/output.txt');
  fs.renameSync('/docs', '/mydocs');
}

// Call the function to perform the renaming
renameFiles();
```

This JavaScript code does the same thing as your Go code. It uses `fs.renameSync` which synchronously renames files and directories in the file system.
