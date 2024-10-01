In JavaScript, you can use the `fs` module to interact with the file system. Here's an example of how you could implement the above code in JavaScript:
```
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
Note that in JavaScript, you need to use the `fs.statSync()` method to get the file size, and you need to handle any errors that may occur during the operation. Additionally, you can also use the `path` module to work with file paths.
