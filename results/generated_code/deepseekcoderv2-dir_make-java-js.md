 Certainly! Below is the JavaScript equivalent of the provided Java code that creates a directory and any missing parent directories, mimicking the behavior of the `mkdir -p` command:

```javascript
const fs = require('fs');
const path = require('path');

function createDir(dirPath) {
    try {
        const resolvedPath = path.resolve(dirPath);
        if (fs.existsSync(resolvedPath)) {
            console.log("path already exists");
            return;
        }
        fs.mkdirSync(resolvedPath, { recursive: true });
        console.log("path successfully created");
    } catch (err) {
        console.error(err);
    }
}

// Usage example
createDir('C:/parent/test');
```

### Explanation:
1. **Importing Modules**: The `fs` module from Node.js is used for file system operations, and the `path` module helps with resolving the directory path correctly.
2. **Function Definition**: The `createDir` function takes a single argument `dirPath`, which is the path of the directory to be created.
3. **Resolving Path**: The `path.resolve(dirPath)` function normalizes the path and resolves it to an absolute path.
4. **Checking Existence**: `fs.existsSync(resolvedPath)` checks if the directory already exists. If it does, it prints a message indicating that the path already exists.
5. **Creating Directory**: `fs.mkdirSync(resolvedPath, { recursive: true })` creates the directory and any necessary parent directories. The `{ recursive: true }` option ensures that all missing parent directories are created.
6. **Error Handling**: Any errors during this process are caught and logged using `console.error`.

This code should work on both Windows and Unix-like systems, as Node.js's file system operations are designed to be platform-independent.
