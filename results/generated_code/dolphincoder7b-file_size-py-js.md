The JavaScript version of your Python code is as follows:

```javascript
const fs = require('fs');

let size;

try {
    const stat = fs.statSync('./input.txt');
    size = stat.size;
} catch (err) {}

try {
    const stat = fs.statSync('/input.txt');
    if (!!stat && !stat.isDirectory()) {
        size += stat.size;
    }
} catch (err) {}
```

Here, `require('fs')` is used to import the file system module in Node.js. The `try-catch` block is used to handle any potential errors that may arise from trying to read a nonexistent file or accessing a directory instead of a regular file.

Please note: This code snippet only works on the Node.js environment. If you're using this as part of another environment, make sure to adapt the JavaScript code according to your requirements.
