In JavaScript, you can use the `fs` module to read the size of a file. Here's the equivalent code for the Go program:
```
const fs = require('fs');

function printFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(`${stats.size} bytes`);
  } catch (err) {
    console.error(err);
  }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
Note that in JavaScript, the `fs` module is used for asynchronous file operations, so we need to use `statSync()` method to get the size of a file synchronously. Also, the `console.error()` method is used to print the error message instead of `fmt.Println()`.
