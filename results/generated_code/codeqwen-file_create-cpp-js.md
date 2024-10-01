In JavaScript, there is no direct equivalent to C++'s `<filesystem>` library for creating new files and directories at a given path. However, we can use the Node.js File System (fs) module which provides an asynchronous API based on callbacks or a Promise-based API for interacting with the file system.

Here is how you can achieve it using fs in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

// Create output.txt file in current working directory and root directory
[process.cwd(), '/'].forEach(dir => {
    let filePath = path.join(dir, 'output.txt');
    fs.writeFileSync(filePath, '', (err) => {
        if (err) throw err;
    });

    let dirPath = path.join(dir, 'docs');
    fs.mkdirSync(dirPath, (err) => {
        if (err) throw err;
    });
});
```

Here's how it works:
- `process.cwd()` returns the current working directory of Node.js application.
- `path.join(...)` is used to join the given path segments into a single path string.
- `fs.writeFileSync(filePath, '', ...)` creates an empty file at the given path synchronously. If the file exists, it will be overwritten.
- `fs.mkdirSync(dirPath, ...)` creates a directory at the given path synchronously. If the directory already exists, no error is thrown.
