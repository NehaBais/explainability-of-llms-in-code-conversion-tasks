In JavaScript, you can use the `fs` module to achieve similar functionality. Here's how you could convert and implement your C++ code:

```javascript
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
    let stat;
    try {
        stat = fs.statSync(filePath);
    } catch (e) {
        console.log(path.join(__dirname, filePath), " does not exist");
        return;
    }

    if (stat.isDirectory()) {
        console.log(path.join(__dirname, filePath), " is a directory");
    } else {
        console.log(path.join(__dirname, filePath), " exists with a file size of", stat.size, "bytes.");
    }
}

// Check for files and directories in the current working directory
fileExists("input.txt");
fileExists("zero_length.txt");

// Check for files and directories in the filesystem root
if (process.platform === 'win32') {
    // On Windows, we use "\\?\" to access a directory at the root of a drive.
    fileExists("\\\\?\\C:\\docs\\input.txt");
    fileExists("\\\\?\\C:\\docs\\zero_length.txt");
} else if (process.platform === 'linux' || process.platform === 'darwin') {
    // On Linux and MacOS, we use "/" to access the root directory.
    fileExists("/docs/input.txt");
    fileExists("/docs/zero_length.txt");
}
```

Note: The above code will run in a Node.js environment. Also, it doesn't include error handling for directories in the filesystem root because the path must be absolute and correctly formatted for the operating system (for example, `C:\` on Windows and `/` on Unix-like systems).
