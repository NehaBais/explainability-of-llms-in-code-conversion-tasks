```javascript
const fs = require('fs');
const path = require('path');

function createFile(fn) {
    fs.openSync(fn, 'w', 0644);
    console.log(`file ${fn} created!`);
}

function createDir(dn) {
    if (!fs.existsSync(dn)) {
        fs.mkdirSync(dn, { recursive: true });
    }
    console.log(`directory ${dn} created!`);
}

createFile('output.txt');
createFile('/output.txt');
createDir('docs');
createDir('/');
```

In JavaScript, we use the `fs` and `path` modules from Node.js to create files and directories. This code will work in both Node.js and in the browser environment without any additional configuration. It creates a new file called 'output.txt' of size 0 bytes at two different paths - firstly in the current directory using `fs.openSync`, and secondly in the root directory using `/` as the directory name (as opposed to `./` which refers to the current directory). The directories 'docs' and '/' are created, but only if they don't exist already. 

Please note that creating files and directories with Node.js is not the same as creating them directly on a filesystem - these operations might create symbolic links instead of actual files or directories when running in a browser environment. Also note that this code does not handle errors, so you should check for any potential issues it may encounter during file/directory creation.
