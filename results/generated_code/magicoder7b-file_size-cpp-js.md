 The JavaScript equivalent of the C++ code would be:

```JavaScript
const fs = require('fs');

function printFileSize(filename) {
    try {
        const size = fs.statSync(filename).size;
        console.log(`Size of file ${filename} is ${size} bytes.`);
    } catch (err) {
        console.error(err.message);
    }
}

printFileSize("input.txt");
printFileSize("/input.txt");
```
This JavaScript code does the same thing as your C++ code: it checks the size of a file called `input.txt` in both the current working directory and at the root level (which is represented by `/`). If either or both files don't exist, it will catch the error and output an error message.

Note that this JavaScript program needs to run within a Node.js environment due to the use of the `fs` module, which provides file system-related functionalities.
