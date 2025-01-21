Sure, here is the JavaScript equivalent of your C code:

```javascript
const fs = require('fs');

let inputFilePath = 'input.txt';

fs.stat(inputFilePath, (err, stats) => {
    if (err) throw err;

    console.log(stats.size);
});

fs.stat('/input.txt', (err, stats) => {
    if (err) throw err;
    
    console.log(stats.size);
});
```

In this script we are using the `fs` module to perform file operations. The `stat` method is used to get information about a file or directory. We then use the `size` property of the returned object to get the size of the file in bytes. 

Please ensure that Node.js is installed on your system and you have access to the filesystem API using the 'fs' module. You can install the module by running 'npm install fs' command in your terminal.
