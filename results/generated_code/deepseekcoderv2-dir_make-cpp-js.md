 Sure, here is the equivalent JavaScript code using Node.js to achieve the same functionality as the provided C++ code:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    if (fs.existsSync(dirPath)) {
        return 0;
    }

    try {
        fs.mkdirSync(dirPath, { recursive: true });
        return 0;
    } catch (err) {
        console.error(`couldn't create directory: ${dirPath}`);
        return -1;
    }
}

if (process.argv.length !== 3) {
    console.log('usage: node mkdirp <path>');
    process.exit(1);
}

const dirPath = path.resolve(process.argv[2]);
mkdirp(dirPath);
```

### Explanation:
1. **Importing Required Modules**: The code uses the `fs` and `path` modules from Node.js to handle file system operations and resolve paths respectively.
2. **Function Definition (`mkdirp`)**: This function takes a directory path as an argument, checks if it already exists using `fs.existsSync`, and creates it with `fs.mkdirSync` but only if the parent directories do not exist. The `{ recursive: true }` option ensures that all missing parent directories are created.
3. **Argument Checking**: The script checks if the correct number of arguments is provided (`process.argv.length !== 3`), and if not, it prints a usage message and exits with a status code of 1.
4. **Path Resolution**: It resolves the provided path using `path.resolve(process.argv[2])`.
5. **Function Call**: Finally, it calls the `mkdirp` function with the resolved directory path.

This JavaScript script should behave similarly to the C++ program, creating directories and their parents if they do not already exist.
