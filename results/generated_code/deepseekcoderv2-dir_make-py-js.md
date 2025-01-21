 To convert the given Python code to JavaScript, we can use Node.js which provides a similar functionality through its built-in `fs` module. The equivalent function in JavaScript would look like this:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    try {
        fs.mkdirSync(dirPath, { recursive: true });
        console.log(`Directory created at ${dirPath}`);
    } catch (err) {
        if (err.code !== 'EEXIST') {
            throw err;
        }
        console.log(`Directory already exists at ${dirPath}`);
    }
}

// Example usage:
mkdirp('./path/to/dir');
```

### Explanation:
1. **Import Required Modules**: We import the `fs` and `path` modules from Node.js. The `fs` module provides the necessary functions to create directories, while the `path` module helps in handling and transforming file paths.
2. **Function Definition**: The `mkdirp` function takes a single argument `dirPath`, which is expected to be a string representing the directory path.
3. **Directory Creation**: We use `fs.mkdirSync` with the `recursive: true` option to ensure that all missing parent directories are created. If the directory already exists, this will not throw an error (hence the `exist_ok=True` functionality is implicitly handled by setting `{ recursive: true }`).
4. **Error Handling**: We catch any errors that occur during the directory creation process and check if the error code is 'EEXIST' (which indicates that the directory already exists). If it is, we log a message indicating the directory already exists; otherwise, we rethrow the error.
5. **Example Usage**: An example usage of the `mkdirp` function is provided to demonstrate how to call it with a specific path.

This implementation should work equally well on both Windows and Unix-based systems (Linux, macOS) as Node.js's `fs` module provides cross-platform compatibility for file system operations.
