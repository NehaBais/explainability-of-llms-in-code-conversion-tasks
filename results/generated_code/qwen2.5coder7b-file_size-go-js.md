Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');

function printFileSize(f) {
    fs.stat(f, (err, stat) => {
        if (err) {
            console.log(err);
        } else {
            console.log(stat.size);
        }
    });
}

printFileSize("input.txt");
printFileSize("/input.txt");
```
In the JavaScript code above, we use Node.js's built-in `fs` module to interact with the file system. We define a function `printFileSize` which takes a path as an argument and uses `fs.stat` to retrieve information about the file at that path. If there is an error (e.g., if the file does not exist), it logs the error. Otherwise, it logs the size of the file. The paths passed to `printFileSize` are identical to those in your Go code.
