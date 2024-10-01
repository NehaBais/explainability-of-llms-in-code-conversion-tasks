Here's the JavaScript code that accomplishes the same task as the Golang code you provided:
```
const fs = require('fs');
const path = require('path');
function printFileSize(filePath) {
  try {
    const stats = fs.statSync(filePath);
    console.log(`File size for ${filePath}: ${stats.size} bytes`);
  } catch (err) {
    console.error(`Error reading file: ${err}`);
  }
}
printFileSize(path.join(__dirname, 'input.txt'));
printFileSize('/input.txt');
```
This code uses the `fs` module to read files and the `path` module to concatenate file paths. The `printFileSize` function takes a file path as an argument, reads its size using `statSync`, and prints it to the console. The function is called twice, once for a file in the current working directory and once for a file in the root file system.

