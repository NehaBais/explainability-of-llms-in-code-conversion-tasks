The JavaScript equivalent of the provided C++ code is as follows. Note that JavaScript does not have a built-in method to get file size, but it can be accomplished using Node's `fs` module. 

Also note that in a browser environment or an unsupported environment running on a server, we need to use a package like 'fs'. Here is how you could do it:
```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(filename) {
    fs.stat(filename, (err, stats) => {
        if (err) {
            console.error(err);
            return;
        }
        console.log(`Size of file ${filename} is ${stats.size} bytes.`);
    });
}

printFileSize("input.txt");
// Absolute path will be different based on where you are running script from
printFileSize(__dirname + "/" + "input.txt"); 
```

This JavaScript version uses Node's built-in `fs` (file system) module to get information about the file(s). The function `stat()` is used to request metadata of the file specified by path, and then it logs the size in bytes. If an error occurs while trying to access the statistic for the given filename, it'll print that out as well.

