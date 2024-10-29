In JavaScript we use the `fs` module from NodeJS for file operations like checking if a directory or file exists. Here is how your GoLang code can be converted to JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function printStat(p) {
    fs.stat(p, (err, stats) => {
        if(err){
            console.log(err); 
            return;
        }
        
        if(stats.isDirectory()){
           console.log(p + " is a directory");
        } else {
           console.log(p + " is a file");
        }
    });
}

printStat("input.txt");  // relative to current working directory
printStat("/input.txt");// absolute path from root of the filesystem
printStat("docs");      // relative to current working directory
printStat("/docs");     // absolute path from root of the filesystem
```
Please note that this script must be run on a system with NodeJS installed as it uses features from the fs (file-system) module. The input paths are relative to the current working directory if they start without "/". If you want an absolute path, prepend with "/" in JavaScript.

