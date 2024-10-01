Here is the converted code from Golang to JavaScript:
```javascript
const fs = require('fs');
 
function printStat(path) {
    try {
        const stats = fs.statSync(path);
        if (stats.isDirectory()) {
            console.log(`${path} is a directory`);
        } else {
            console.log(`${path} is a file`);
        }
    } catch (err) {
        console.log(err);
    }
}
 
printStat('input.txt');
printStat('/input.txt');
printStat('docs');
printStat('/docs');
```
This code uses the `fs` module in Node.js to perform file system operations. The `try-catch` block is used to handle any errors that may occur when calling `statSync`. If an error occurs, it will be printed to the console. Otherwise, if the path points to a directory, it will print that the path is a directory. If the path points to a file, it will print that the path is a file.

