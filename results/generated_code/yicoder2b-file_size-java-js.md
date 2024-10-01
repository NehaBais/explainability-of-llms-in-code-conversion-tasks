The equivalent JavaScript code for the given Java code is as follows:

```javascript
const fs = require('fs');

// Verify size of a file in current working directory
try {
    let fileA = fs.statSync("file.txt"); 
    console.log(`${fileA.size} bytes`);
} catch (err) {
    if (err.code === 'ENOENT') {
        console.error('File not found');
    } else {
        throw err;
    }
}

// Verify size of a file in file system root
try {
    let fileB = fs.statSync('/file.txt'); 
    console.log(`${fileB.size} bytes`);
} catch (err) {
    if (err.code === 'ENOENT') {
        console.error('File not found');
    } else {
        throw err;
    }
}
```
This JavaScript code does the same as the Java code you provided - it verifies the size of two files, "file.txt" in current working directory and "/file.txt" in file system root, and prints their sizes. If any error occurs during this process, it catches the error and prints an appropriate message for each case.
