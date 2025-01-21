Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function printStat(p) {
    fs.stat(p, (err, stats) => {
        if(err) {
            console.error(err);
            return;
        }
        if(stats.isDirectory()) {
            console.log(`${p} is a directory`);
        } else if(stats.isFile()){
            console.log(`${p} is a file`);
        } else {
            console.log(`${p} is neither a file nor a directory.`);
        }
    });
}

printStat(path.join(process.cwd(), 'input.txt'));
printStat(path.join('/', 'input.txt'));
printStat(path.join(process.cwd(), 'docs'));
printStat(path.join('/', 'docs'));
```

This JavaScript code uses the built-in 'fs' module to check if a file or directory exists and what it is. It also uses the 'path' module for joining paths on the filesystem, which is similar to Go's filepath.Join. 

Please note that because this script runs in Node.js environment, it doesn't have direct access to the root of the system (i.e., '/') as the user would not typically have rights to do so without additional permissions or sudoing. If you want to check for these locations on a real filesystem, you may need to run this script with elevated privileges.
