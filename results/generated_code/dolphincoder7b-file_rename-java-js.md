Below is the JavaScript equivalent of the Java code provided:
```javascript
const fs = require('fs');
 
function renameFile(oldname, newname) {
    // File (or directory) with old name
    const file = fs.openSync(oldname);
 
    try {
        // File (or directory) with new name
        const file2 = fs.openSync(newname, 'w', 0o744);
 
        // Rename file (or directory)
        const success = fs.renameSync(file, file2);
        return success;
    } finally {
        // Close the files
        fs.closeSync(file);
        fs.closeSync(file2);
    }
}
 
function test(type, oldname, newname) {
    console.log(`The following ${type} called ${oldname} will be renamed as ${newname}.`);
 
    if (renameFile(oldname, newname)) {
        console.log(`${oldname} was successfully renamed to ${newname}.`);
    } else {
        console.error(`Error: Failed to rename ${oldname} into ${newname}`);
    }
}
 
test('file', 'input.txt', 'output.txt');
test('file', `/input.txt`, `/output.txt`);
test('directory', 'docs', 'mydocs');
test('directory', '/docs/', '/mydocs/');
```
This JavaScript code assumes that the `fs` module is available in your environment (it's a built-in Node.js module). If you're not using Node.js, you can install it with npm:

npm install fs

