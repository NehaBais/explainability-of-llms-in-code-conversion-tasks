To convert the provided C code to JavaScript, we can utilize the Node.js `fs` module for file system operations. The `fs.promises.mkdir()` method is useful here as it allows us to create directories recursively. Here's how you can implement the equivalent functionality:

```javascript
const fs = require('fs').promises;
const path = require('path');

async function mkdirRecursive(dirPath) {
    // Check if the directory already exists, if not, create it recursively
    try {
        await fs.access(dirPath);
        console.log(`Directory ${dirPath} already exists.`);
    } catch (err) {
        const parentDir = path.dirname(dirPath);
        if (parentDir !== dirPath) {
            // Create the parent directory first if it doesn't exist
            await mkdirRecursive(parentDir);
        }
        await fs.mkdir(dirPath, { recursive: true });
        console.log(`Directory ${dirPath} created successfully.`);
    }
}

// Example usage:
mkdirRecursive('./path/to/dir')
  .catch(err => console.error('Error creating directory:', err));
```

### Explanation:

1. **Dependencies**: 
   - `fs.promises` module for asynchronous file system operations.
   - `path` module to handle and manipulate paths easily.

2. **Function Definition**:
   - The function `mkdirRecursive(dirPath)` takes a single argument `dirPath`, which is the directory path we want to create, including any missing parents.

3. **Access Check**:
   - We use `fs.access()` to check if the directory exists. If it does, we log that it already exists and do nothing further.
   - If it doesn't exist, we throw an error to enter the catch block.

4. **Recursive Directory Creation**:
   - The function calls itself recursively to create any missing parent directories before creating the target directory.

5. **Creating Target Directory**:
   - We use `fs.mkdir()` with `{ recursive: true }` option to create the target directory. This option allows us to create nested directories all at once if necessary.
   
6. **Example Usage**:
   - The function is called with a sample path `./path/to/dir`, and any errors are caught and logged.

This implementation works across platforms where Node.js is supported, including Windows and Unix-like systems.
