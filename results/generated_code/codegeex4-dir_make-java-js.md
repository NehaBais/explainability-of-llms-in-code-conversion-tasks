In JavaScript, you can use the `fs` module to interact with the file system. The `mkdirSync()` method of the `fs` module can be used to create a directory and any missing parents if they don't already exist.

Here's the equivalent code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirRecursive(dirPath) {
    try {
        // Use 'mkdir -p' approach: make all directories along the path.
        fs.mkdirSync(dirPath, { recursive: true });
        console.log("Path successfully created");
    } catch (err) {
        if (err.code === 'EEXIST') {
            console.log('Directory already exists');
        } else {
            throw err;
        }
    }
}

// Example usage:
const dirPath = path.join(__dirname, './path/to/dir');
mkdirRecursive(dirPath);
```

This code works cross-platform thanks to Node.js's `fs` module. It attempts to create the directory specified in the `dirPath` argument and any necessary parent directories.

If the directory already exists (`EEXIST` error), it prints a message indicating that the directory already exists without throwing an error.

The `{ recursive: true }` option allows `mkdirSync` to create all the necessary directories along the path, similar to the `-p` flag in POSIX's `mkdir`.

Remember to run this code with Node.js (`node yourScript.js`). Also, due to cross-platform differences in file paths (e.g., Windows uses backslashes `\`, while Unix/Linux/macOS uses forward slashes `/`), it's recommended to use the `path.join()` function for constructing directory paths.
