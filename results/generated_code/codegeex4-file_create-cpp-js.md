The equivalent JavaScript code for the given C++ program would be as follows. However, please note that in JavaScript it's not possible to write files into root directory (unless you have admin rights) and there are no filesystem libraries natively available in JavaScript.

```javascript
const fs = require('fs');

// Create a new empty file called "output.txt" of size 0 bytes 
fs.closeSync(fs.openSync('./output.txt', 'w'));
try {
    fs.accessSync('/output.txt', fs.constants.F_OK);
} catch(e) {
    // File doesn't exist, do nothing
}

// Create an empty directory called "docs"
fs.mkdirSync('docs');
try {
    fs.accessSync('/docs', fs.constants.F_OK);
} catch(e) {
    // Directory doesn't exist, do nothing
}
```
This JavaScript code does the following:
- It imports the built-in 'fs' module that provides an API for interacting with the file system.
- It then uses this API to create a new file called "output.txt" in the current directory and attempts to create it also at the root filesystem. In case of any error, it's silently ignored (similar to C++ behaviour of not doing anything).
- Similarly, it creates an empty directory called "docs" in the current directory and again attempts to do so at the root filesystem. Again, if there's an error, it's silently handled.

This code should be run with appropriate permissions because creating a file or directory at the filesystem root usually requires admin rights.
