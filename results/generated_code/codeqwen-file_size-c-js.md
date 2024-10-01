The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');

// for the file in the current working directory
fs.stat('input.txt', (err, stats) => {
    if (err) throw err;
    console.log(`Size of ${stats.size} bytes`);
});

// For the file in the root directory
fs.stat('/input.txt', (err, stats) => {
    if (err) throw err;
    console.log(`Size of ${stats.size} bytes`);
});
```

In this code, we use Node.js's built-in `fs` (file system) module to access the file system. The `stat()` method is used to get information about a file or directory, and it accepts a callback that receives an error object if something goes wrong and a Stats object that contains various properties about the file. 

Please note that JavaScript requires path to be absolute when getting stats of a file in root directory. So we need to pass "/input.txt" instead of "input.txt".
