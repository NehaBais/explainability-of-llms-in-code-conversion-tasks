The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');

function printFileSize(fileName) {
  fs.stat(fileName, (err, stats) => {
    if (err) {
      console.error(`Couldn't stat '${fileName}'`);
    } else {
      console.log(stats.size);
    }
  });
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
This code uses the native Node.js fs module to perform file system operations. It takes a filename as an argument, and then calls `fs.stat()`, which returns information about the specified file. If there is any error while reading the file's stats (such as the file does not exist or permissions are denied), it will be logged to stderr. If there is no error, it prints the size of the file.
