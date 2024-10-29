In JavaScript, you can use the `fs` module from Node.js to achieve similar functionality. Here is an equivalent code in JavaScript -

```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(f) {
    fs.stat(f, (err, stat) => {
        if (err) { 
            console.log(err); 
        } else {
            console.log(stat.size);
        }
    });
}

printFileSize("input.txt");
printFileSize("/input.txt");
```

Please note that in JavaScript, file paths beginning with "/" refer to the root of the filesystem (similar to how a URL with a scheme like "file:///" refers to the root directory on many systems). In other words, using absolute path as in your Go example wouldn't work because Node.js doesn’t use the same concept for directories, it uses a different concept called `/` based paths from the current working directory of your program. 

