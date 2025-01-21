Here's how you can convert the given Rust code to JavaScript using Node.js:

```javascript
const fs = require('fs');
const path = require('path');

const filesToCheck = ['input.txt', 'docs', '/input.txt', '/docs'];

filesToCheck.forEach(file => {
    const filePath = file.startsWith('/') ? path.join('/', file) : file;
    fs.stat(filePath, (err, stats) => {
        if (err && err.code === 'ENOENT') {
            console.log(`${file} does not exist`);
        } else if (stats.isDirectory()) {
            console.log(`${file} is a directory`);
        } else {
            console.log(`${file} is a file`);
        }
    });
});
```

This JavaScript code uses the `fs` and `path` modules to check for the existence and type of files. It iterates over an array of file paths, checks if each file exists and determines whether it is a directory or a regular file, then prints the result to the console.

Note that Node.js has asynchronous file system operations, so you need to use a callback function `fs.stat` instead of a `match` statement as in the Rust code. Also note that paths starting with `/` are treated as absolute paths, but for simplicity, this script checks both absolute and relative paths without modifying them.
