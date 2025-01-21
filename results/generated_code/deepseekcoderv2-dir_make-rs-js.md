 Certainly! Below is the JavaScript equivalent of the provided Rust code using Node.js, which creates a directory and any missing parent directories if they do not already exist:

```javascript
const fs = require('fs').promises;
const path = require('path');

async function createDir(dirPath) {
    try {
        await fs.mkdir(dirPath, { recursive: true });
        console.log(`Directory created at ${dirPath}`);
    } catch (err) {
        if (err.code !== 'EEXIST') {
            throw err;
        } else {
            console.log(`Directory already exists at ${dirPath}`);
        }
    }
}

// Example usage:
const dirPath = './path/to/dir';
createDir(dirPath).catch(err => console.error(err));
```

This JavaScript code uses the `fs` module from Node.js to create a directory and its parents if they do not already exist (`{ recursive: true }` ensures this behavior). If the directory already exists, it logs a message indicating that the directory already exists.
