You can achieve the same functionality in JavaScript using Node.js. To create a directory and any missing parents, you will need to use the built-in 'fs' module that comes with Node.js. The following JavaScript code should work cross-platform:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    try {
        if (fs.existsSync(dirPath)) {
            // Directory already exists, so we do nothing.
            return;
        }

        // Create the directory and any missing parent directories.
        fs.mkdirSync(path.dirname(dirPath), { recursive: true });
    } catch (err) {
        console.error(`Error creating directory ${dirPath}:`, err);
    }
}

// Example usage:
const dirPath = './path/to/dir';
mkdirp(dirPath);
```

This function `mkdirp` accepts a single argument, the path of the directory you wish to create along with any necessary parent directories. It checks if the directory exists first, and if it doesn't, it creates all missing parent directories using `fs.mkdirSync` with the `{ recursive: true }` option.

If an error occurs during this process (e.g., insufficient permissions), it will be logged to the console.
