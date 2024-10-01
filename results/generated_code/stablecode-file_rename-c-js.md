Here is your C code converted to JavaScript:

```javascript
const fs = require('fs');

try {
    // Rename file in the current working directory.
    fs.renameSync('input.txt', 'output.txt'));

    // Rename a directory in the same directory.
    fs.renameSync('docs', 'mydocs'));

    // Rename a file in the root filesystem directory.
    fs.renameSync('/input.txt', '/output.txt');
    
    // Rename a directory in the root filesystem directory.
    const originalPath = require('path').join(require('os').homedir()), 'docs';
    const newPath = require('path').join(require('os').homedir()), 'mydocs';

    if (fs.existsSync(originalPath)) {
        fs.renameSync(originalPath, newPath));
    } else {
        throw new Error(`Directory ${originalPath} does not exist.`);
    }
} catch (error) {
    console.error('An error occurred:', error);
}
```
This JavaScript code will perform the same task as your C code. It renames an input file into output.txt, a directory called docs into mydocs and also rename a file in the root filesystem directory and a directory in the root filesystem directory.

Note: This script might not work properly if there are files or directories with the names 'input.txt' or 'docs', or '/input.txt'. It is recommended to avoid using these filenames for safety reasons.
