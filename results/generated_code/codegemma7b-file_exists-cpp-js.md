```javascript
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
    const filePathObj = path.resolve(filePath);
    if (fs.existsSync(filePathObj)) {
        if (fs.statSync(filePathObj).isDirectory()) {
            console.log(`${filePath} is a directory`);
        } else {
            console.log(`${filePath} exists with a file size of ${fs.statSync(filePathObj).size} bytes.`);
        }
    } else {
        console.log(`${filePath} does not exist`);
    }
}

fileExists('input.txt');
fileExists('zero_length.txt');
fileExists('docs/input.txt');
fileExists('docs/zero_length.txt');
```

**Explanation:**

* The `fs` module provides the necessary functions to check for file existence and get file information.
* The `path.resolve()` function resolves the file path to an absolute path.
* `fs.existsSync()` checks if the file exists at the specified path.
* `fs.statSync()` gets the file information, including the file size and whether it's a directory.
* The output is similar to the C++ version, indicating whether the file exists, its type, and size.

**Note:**

* The code assumes that the file and directory paths are relative to the current working directory.
* You can change the file and directory paths to the desired values in the `fileExists()` function calls.
