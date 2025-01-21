To convert the given C++ code to JavaScript, you need to use the Node.js File System (fs) module. Here's how it would look:

```javascript
const fs = require('fs');

// Function to check if a file exists and is a directory
function checkFileExists(dirPath, fileName) {
    const filePath = dirPath + '/' + fileName;

    fs.stat(filePath, function(err, stats) {
        if (err) throw err;
        
        if (stats.isFile()) {
            console.log(filePath + " exists with a size of " + stats.size + " bytes.");
        } else if (stats.isDirectory()) {
            console.log(filePath + " is a directory");
        } else {
            console.log(filePath + " does not exist");
        }
    });
}

// Check in the current working directory
checkFileExists('.', 'input.txt');
checkFileExists('.', 'zero_length.txt');

// Check in the root filesystem (typically '/' on Unix-like systems)
checkFileExists('/', 'docs/input.txt');
checkFileExists('/', 'docs/zero_length.txt');
```

This script uses Node.js's fs module to check if files exist at specified paths. The `checkFileExists` function checks for both directories and files, and prints the result based on the file type found.
