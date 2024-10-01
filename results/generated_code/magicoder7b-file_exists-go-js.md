 In JavaScript, you can use the `fs` module to do similar checks as in Golang. Here is equivalent code:

```javascript
const fs = require('fs');

function printStat(p) {
    fs.stat(p, (err, stats) => {
        if (err) {
            console.log(err);
        } else if (stats.isDirectory()) {
            console.log(`${p} is a directory`);
        } else {
            console.log(`${p} is a file`);
        }
    });
}

printStat("./input.txt");
printStat("/input.txt");
printStat("./docs");
printStat("/docs");
```
In the above JavaScript code:
- The `fs.stat()` function gets the status of a file or directory asynchronously (callback style) and checks if it is a file, then a directory, or gives error message.
- Both `./input.txt` and `/input.txt` refer to the same file in the current directory and root directory respectively. `./` refers to the current directory.
