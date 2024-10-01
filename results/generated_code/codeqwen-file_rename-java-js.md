The given Java code is already written in JavaScript using Node.js's built-in `fs` module (File System). Here it is:

```javascript
const fs = require('fs');

function renameFile(oldName, newName) {
    // Rename file (or directory)
    try {
        fs.renameSync(oldName, newName);
        return true;
    } catch (err) {
        console.log(`Error renaming ${oldName}: ${err}`);
        return false;
    }
}

function test(type, oldName, newName) {
    console.log(`The following ${type} called ${oldName} ${renameFile(oldName, newName) ? 'was renamed as' : 'could not be renamed into'} ${newName}.`);
}

test('file', './input.txt', './output.txt');
test('file', `${__dirname}/input.txt`, `${__dirname}/output.txt`);
test('directory', './docs', './mydocs');
test('directory', `${__dirname}/docs/`, `${__dirname}/mydocs/`);
```

In JavaScript, you don't need to import anything because Node.js provides it by default. Also, the 'fs' module has a synchronous and an asynchronous version of each method. The "try-catch" block is used for error handling in renameFile function.

Note:
1. In the test function, `${__dirname}` gives you the directory name of your script file. It can be replaced with '.' if the file and script are in the same directory.
2. The path separator (`/`) is different between Unix/Linux (forward slash) and Windows (backward slash). Node.js uses `__dirname` to provide consistent path format.
