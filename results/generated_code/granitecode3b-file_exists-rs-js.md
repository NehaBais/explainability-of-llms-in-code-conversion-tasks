Sure, here's the equivalent JavaScript code:
```
const fs = require('fs');

function verifyFileAndDirectoryExistence() {
  const cwd = process.cwd(); // get current working directory
  checkFileAndDirectory(cwd + '/input.txt', 'is a file');
  checkFileAndDirectory(cwd + '/docs', 'is a directory');

  const rootDir = '/'; // root directory in the filesystem
  checkFileAndDirectory(rootDir + '/input.txt', 'is a file');
  checkFileAndDirectory(rootDir + '/docs', 'is a directory');
}

function checkFileAndDirectory(filePath, type) {
  fs.stat(filePath, (err, stats) => {
    if (err) {
      console.log(`${filePath} does not exist`);
    } else {
      console.log(`${filePath} is ${type}`);
    }
  });
}

verifyFileAndDirectoryExistence();
```
This code uses the `fs` module from Node.js to check the existence of files and directories in both the current working directory and the root directory in the filesystem. The `stat()` function is used to get information about a file or directory, and the result is passed to a callback function that prints whether the file or directory exists or not.

