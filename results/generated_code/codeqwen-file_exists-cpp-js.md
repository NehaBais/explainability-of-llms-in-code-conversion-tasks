The JavaScript equivalent of the C++ code you provided is as follows:

```javascript
const fs = require('fs');
const path = require('path');

function fileExists(dirPath) {
    let exists = fs.existsSync(dirPath);
    console.log(dirPath + (exists ? ' exists' : ' does not exist'));

    if (exists && fs.statSync(dirPath).isDirectory()) {
        console.log(dirPath + ' is a directory');
    } else if (exists) {
        console.log(dirPath + ' exists with a file size of ' + fs.statSync(dirPath).size + ' bytes.');
    }
}

fileExists('input.txt');
fileExists('zero_length.txt');
fileExists('docs/input.txt');
fileExists('docs/zero_length.txt');
```

Note: 
1. In NodeJS, the `fs.existsSync()` function is used to check if a file or directory exists synchronously.
2. The `path.join()` can be used in place of the string concatenation for better readability and security. 

Also, note that JavaScript does not have built-in support for filesystem operations like C++'s `filesystem` library, so you'll need to use NodeJS's `fs` and `path` modules instead.
