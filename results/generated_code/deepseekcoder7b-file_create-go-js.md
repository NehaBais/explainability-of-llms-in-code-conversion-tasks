Here is the equivalent JavaScript code using Node.js's fs module (fs stands for file system):
```javascript
const fs = require('fs');
const path = require('path');

function createFile(fn) {
    fs.writeFile(fn, '', (err) => {
        if (err) throw err;
        console.log("file " + fn + " created!");
    });
}

function createDir(dn) {
    fs.mkdir(dn, { recursive: true }, (err) => {
        if (err) throw err;
        console.log("directory " + dn + " created!");
    });
}

createFile('output.txt');  // In current directory
createFile('/output.txt');  // In root of filesystem
createDir('docs');   // In the current directory
createDir('/docs');  // In root of filesystem (not advisable, as it's not possible to create a dir at root in most OS)
```
The fs module is a part of Node.js standard library and provides methods for file system operations such as reading/writing files, creating directories etc. The path module helps with handling paths properly across different operating systems. 

Please note that you cannot create a directory at the filesystem root in some systems like Windows or MacOS because these are hard constraints built into those systems. You may not have write permissions on the root of your drive. Trying to do so would result in an error, as shown above. If you're attempting this code in an environment where it is illegal to create a file at the root level of any volume (such as Windows), this code will throw errors when trying to create files or directories at the filesystem root.

