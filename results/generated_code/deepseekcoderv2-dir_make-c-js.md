 To convert the given C code to JavaScript, we can use Node.js which provides a way to create directories and handle file paths. Here's how you can achieve the same functionality in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    if (!fs.existsSync(dirPath)) {
        const parentDir = path.dirname(dirPath);
        if (parentDir !== dirPath) {
            mkdirp(parentDir);
        }
        fs.mkdirSync(dirPath, { recursive: true });
    } else {
        const stats = fs.statSync(dirPath);
        if (!stats.isDirectory()) {
            throw new Error(`${dirPath} exists but is not a directory`);
        }
    }
}

if (process.argv.length !== 3) {
    console.error('Usage: node script.js <path>');
    process.exit(1);
}

const dirPath = process.argv[2];
mkdirp(dirPath);
```

### Explanation:
1. **Dependencies**: We use Node.js's `fs` and `path` modules to handle file system operations and path manipulations respectively.
2. **Function `mkdirp`**: This function takes a directory path as an argument.
   - It first checks if the directory exists using `fs.existsSync`.
   - If it doesn't exist, it recursively creates all missing parent directories using `path.dirname(dirPath)` to get the parent directory and then calls `mkdirp` on that path.
   - Once the parent directories are created, it creates the target directory with `fs.mkdirSync` (using the `{ recursive: true }` option).
   - If the directory already exists, it checks if it is a directory using `fs.statSync`. If it's not a directory, an error is thrown.
3. **Command Line Argument Handling**: The script accepts one command line argument which is the path to the directory. It checks if exactly one argument is provided and then calls the `mkdirp` function with that path.

This JavaScript code will behave similarly to the provided C code, creating directories and any necessary parent directories if they do not already exist.
