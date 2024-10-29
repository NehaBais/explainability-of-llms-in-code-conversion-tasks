The JavaScript code for the above C program can be written using the `fs` module in NodeJS, which has a function called `stat()` to get information about files. Here is how you can do it:

```javascript
const fs = require('fs');
const path = require('path');

// Get file size of 'input.txt' in current working directory 
fs.stat('./input.txt', (err, stats) => {
    if (!err){
        console.log(stats.size);
    } else {
        console.log("An error occurred while trying to read the file.");
    }
});

// Get file size of 'input.txt' in root directory 
fs.stat(path.join(__dirname, '../', 'input.txt'), (err, stats) => {
    if (!err){
        console.log(stats.size);
    } else {
        console.log("An error occurred while trying to read the file.");
    }
});
```
Note: This JavaScript code can be run in a NodeJS environment and is not cross-compatible with regular web browsers due to differences between server side JavaScript (NodeJS) and client side JavaScript (browser). The `fs` module used here is specific to Node.js, which provides utilities for interacting with the file system.

