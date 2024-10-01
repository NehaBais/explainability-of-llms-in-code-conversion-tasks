The provided Golang code checks if a file and directory exist, but not how they are structured or what their permissions are. The JavaScript conversion is the following:

```javascript
const fs = require('fs');

function printStat(p) {
    fs.stat(p, (err, stats) => {
        if (err) 
            console.error(err);
        else if (stats.isDirectory())
            console.log(`${p} is a directory`);
        else
            console.log(`${p} is a file`);
    });
}

printStat('input.txt');
printStat('/input.txt'); 
printStat('docs');
printStat('/docs'); 
```
In the JavaScript version, `fs.stat` is used to get information about a file or directory. If an error occurs during this operation, it will be logged in the console instead of throwing an exception. The type of the file (directory/file) is determined by the results of the `isDirectory()` call. 

The `printStat` function now takes full path to allow you check for files and directories in different locations.
