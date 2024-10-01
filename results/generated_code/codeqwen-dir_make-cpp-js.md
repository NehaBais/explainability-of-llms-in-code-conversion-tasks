The JavaScript version of the code can be implemented using the 'fs' (File System) module in Node.js. Here is how to convert your C++ code:

```javascript
const fs = require('fs');
const path = require('path');

function createDirs(dirPath) {
    try {
        if (!fs.existsSync(dirPath)){
            fs.mkdirSync(dirPath, { recursive: true });
        }
    } catch (err) {
        console.error(`Couldn't create directory: ${dirPath}`);
        return -1;
    }
    return 0;
}

createDirs('./path/to/dir');
```
In the above code, we are using 'fs.existsSync()' function to check if a path exists or not. If the directory does not exist, 'fs.mkdirSync()' will be called with 'recursive: true' option. This will create all the parent directories as well as the target directory.
