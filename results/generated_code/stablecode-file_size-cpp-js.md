Here is your C++ code converted to JavaScript:

```javascript
const fs = require('fs');

function printFileSize(filename) {
    try {
        let size = fs.promises.stat(filename).then(stats => stats.size());

        console.log(`Size of file ${filename}} is ${size} bytes.`);
    } catch (ex) {
        console.error(`${ex.message}.`));
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```

This JavaScript code does the same thing as your C++ code: it reads the size of a specified file in the current working directory and another one in the file system root, then prints the results to the console.
