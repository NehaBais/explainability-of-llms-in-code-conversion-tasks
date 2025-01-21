 Here's the equivalent JavaScript code for the provided Go program:

```javascript
const fs = require('fs');
const path = require('path');

function printStat(p) {
    try {
        const stats = fs.lstatSync(p);
        if (stats.isDirectory()) {
            console.log(`${p} is a directory`);
        } else if (stats.isFile()) {
            console.log(`${p} is a file`);
        } else {
            console.log(`${p} is something else`);
        }
    } catch (err) {
        console.error(err);
    }
}

// Check for the current working directory and filesystem root
printStat("input.txt");
printStat("/input.txt");
printStat("docs");
printStat("/docs");
```

This JavaScript code performs similar checks to see if a file or directory exists in two different scenarios:
1. The current working directory.
2. The filesystem root.
