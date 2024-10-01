Here's the converted code from C++ to JavaScript:
```javascript
const fs = require('fs');
function printFileSize(filename) {
  try {
    const size = fs.statSync(filename).size;
    console.log(`Size of file ${filename} is ${size} bytes.`);
  } catch (err) {
    console.error(err);
  }
}
printFileSize('input.txt');
printFileSize('/input.txt');
```
The code uses the `fs` module to access the file system in Node.js. The `statSync` method is used to retrieve information about a file, including its size. The `try-catch` block handles any exceptions that may occur when reading the file size. The output will display the size of the input.txt file in bytes and any errors that occur while accessing the files.

