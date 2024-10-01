Sure, here's the JavaScript code that does the same thing as the C++ code:
```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(filename) {
    try {
        const size = fs.statSync(path.join(__dirname, filename)).size;
        console.log(`Size of file ${filename} is ${size} bytes.`);
    } catch (error) {
        console.error(error);
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
In this JavaScript code, we use the `fs` module to read the size of a file and the `path` module to get the absolute path of the file. The `try...catch` block is used to catch any errors that may occur when reading the file size.

