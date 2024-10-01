The JavaScript version of the Python code is as follows:
```javascript
const fs = require('fs'); // Importing file system module
const path = require('path'); // Importing path module

// Renaming files and directories in the current working directory
fs.renameSync('./input.txt', './output.txt');
fs.renameSync('./docs', './mydocs');

// Renaming files and directories in root of the filesystem
fs.renameSync(path.join(__dirname, 'input.txt'), path.join(__dirname, 'output.txt'));
fs.renameSync(path.join(__dirname, 'docs'), path.join(__dirname, 'mydocs'));
```
Note: The `path` module is used for joining directories and file paths in JavaScript.
The `fs` module provides file system operations similar to those available in Python's `os` module. We use `renameSync()` function from the `fs` module instead of `rename()`. This is because, by default, `rename()` function in Node.js is asynchronous, making it more difficult to chain commands like this one. However, as long as the user has appropriate permissions, using `renameSync()` should be fine for small scripts.
