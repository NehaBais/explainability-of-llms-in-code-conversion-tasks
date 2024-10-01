You can achieve this in JavaScript using Node.js's built-in 'fs' module, which provides an API for working with the file system, including creating directories and their missing parents. Here is how you can do it:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirP(dirPath) {
    try {
        // Check if directory exists.
        if (!fs.existsSync(dirPath)) {
            // Create each non-existent parent dir, including the final one.
            fs.mkdirSync(path.dirname(dirPath), { recursive: true });
        }
        console.log(`Directory created successfully at ${dirPath}`);
    } catch (err) {
        console.error('Error creating directory:', err);
    }
}

// Example usage:
mkdirP('./path/to/dir');
```

This code does the following:

1. It first checks if the target directory exists using `fs.existsSync`.
2. If the directory doesn't exist, it creates all necessary parent directories using `fs.mkdirSync` with `{ recursive: true }`, which mimics the `-p` flag in POSIX's `mkdir`.
3. The path is split into segments using `path.dirname(dirPath)` to create any missing directories.
4. In case of an error during directory creation, it logs the error message.

This function will work equally well across different operating systems because Node.js handles file paths in a cross-platform manner.
