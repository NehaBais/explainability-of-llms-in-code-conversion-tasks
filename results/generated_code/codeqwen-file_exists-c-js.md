The given code in C checks for the existence of a file called `input.txt` and a directory called `docs` in the current working directory as well as the root directory. Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');
const path = require('path');

function checkFile(filePath) {
  return fs.existsSync(filePath) && fs.lstatSync(filePath).isFile();
}

function checkDir(dirPath) {
  return fs.existsSync(dirPath) && fs.lstatSync(dirPath).isDirectory();
}

console.log(`input.txt is a regular file? ${checkFile('input.txt')}`);
console.log(`docs is a directory? ${checkDir('docs')}`);
console.log(`/input.txt is a regular file? ${checkFile('/input.txt')}`);
console.log(`/docs Is a directory? ${checkDir('/docs')}`);
```

Note: 
- `fs.existsSync()` method checks for the existence of a given path synchronously, returning true if it exists and false if it doesn't.
- `fs.lstatSync()` method is used to get the stats of a file or directory synchronously. It throws an exception if the path does not exist. Then we can use `isFile()` or `isDirectory()` methods on the result to check whether the given path is a file or a directory respectively.
- The `path` module in node.js is used for working with file and directory paths. This module provides utilities for handling file and directory paths.
