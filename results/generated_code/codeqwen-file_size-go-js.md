The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');

function printFileSize(f) {
    try {
        let stat = fs.statSync(f);
        console.log(stat.size);
    } catch (err) {
        console.error(err);
    }
}

printFileSize('./input.txt');
printFileSize('/input.txt');
```

In this code, we're using the `fs` module provided by Node.js to interact with the file system. The `statSync` function is used to get information about a file or directory synchronously (which means it will wait for the operation to complete before moving on). If an error occurs during the operation (such as if the file doesn't exist), it is caught and printed to the console. Otherwise, the size of the file in bytes is logged to the console. The function `printFileSize` is called twice with different filenames to demonstrate its functionality.
