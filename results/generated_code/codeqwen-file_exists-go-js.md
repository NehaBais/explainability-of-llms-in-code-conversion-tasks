The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');
const path = require('path');

function printStat(p) {
    try {
        let stat = fs.statSync(p);
        if (stat.isDirectory()) {
            console.log(`${p} is a directory`);
        } else {
            console.log(`${p} Is a file`);
        }
    } catch (err) {
        console.error(err);
    }
}

printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
```
In JavaScript, the `fs.statSync()` method is used to get information about a file or directory. If an error occurs during execution, it will be caught and logged into the console via try-catch block.
