The provided code is written in C++ and needs to be converted into JavaScript. Here's how you can convert it:

```javascript
const fs = require('fs');

function printFileSize(filename) {
    try {
        var size = fs.lstatSync(filename).size;
        console.log(`Size of file ${filename} is ${size} bytes.`);
    } catch (error) {
        console.error(error.message);
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
This JavaScript code does the same thing as your C++ code, it is just using Node.js's built-in filesystem module (`fs`) to perform similar operations. `fs.lstatSync(filename)` returns information about a file or directory and its attributes which includes size information if it's a regular file. If you are reading the file from a remote or another location, this approach may not work due to network constraints.
Please note that '/input.txt' is relative to current working directory, but 'input.txt' is considered as absolute path for Node.js.
