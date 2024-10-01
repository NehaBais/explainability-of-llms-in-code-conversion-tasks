Here is the equivalent code in JavaScript using 'fs' module to interact with the file system:

```JavaScript
const fs = require('fs');

let fileA = "file.txt";
fs.stat(fileA, (err, stats) => { 
    if (err) throw err;
    console.log(`${stats.size} B`);
});

let fileB = "/file.txt";  // adjust the path to your system's root directory here
fs.stat(fileB, (err, stats) => { 
    if (err) throw err;
    console.log(`${stats.size} B`);
});
```
Please note that this code needs to be executed in a NodeJS environment and file paths need to be adjusted according the system's root directory. Also it doesn't handle the 'file not found' error, if you want do some handling please adjust accordingly.
