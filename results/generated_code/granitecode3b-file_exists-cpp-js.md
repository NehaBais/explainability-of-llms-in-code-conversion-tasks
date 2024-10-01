Sure, here's the JavaScript code that performs the same task as the given C++ code:
```
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
  try {
    const stats = fs.statSync(filePath);
    if (stats.isDirectory()) {
      console.log(`${filePath} is a directory`);
    } else {
      console.log(`${filePath} exists with a size of ${stats.size} bytes.`);
    }
  } catch (err) {
    console.log(`${filePath} does not exist`);
  }
}

fileExists(path.join(__dirname, 'input.txt'));
fileExists('zero_length.txt');
fileExists(path.join(__dirname, '..', 'docs', 'input.txt'));
fileExists(path.join(__dirname, '..', 'docs', 'zero_length.txt'));
```
This JavaScript code uses the `fs` and `path` modules to perform file system operations. The `fileExists` function takes a file path as input and attempts to retrieve information about it using `fs.statSync`. If the file exists, the function checks if it is a directory or not and prints out the appropriate message. If the file does not exist, an error is caught and a message is printed instead.

