 In JavaScript, you can use the `fs` module to work with file system operations. Here's how the equivalent code in JavaScript could look:

```javascript
const fs = require('fs');

function printFileSize(f) {
    try {
        const stat = fs.statSync(f);
        console.log(stat.size);
    } catch (err) {
        console.error(err);
    }
}

printFileSize("input.txt");
printFileSize("/input.txt");
```

The `fs` module in Node.js provides an interface for interacting with the file system. The `fs.statSync()` function is used to get information about a file, including its size. If there's any error (like if the file doesn't exist), it will be caught and logged to console.
