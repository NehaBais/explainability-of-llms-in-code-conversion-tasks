Here is a JavaScript implementation of the C++ code:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
    if (fs.existsSync(dirPath)) {
        return true;
    }

    const parentPath = path.dirname(dirPath);

    if (!fs.existsSync(parentPath)) {
        mkdirp(parentPath);
    }

    fs.mkdirSync(dirPath, { recursive: true });
}

if (process.argv.length !== 3) {
    console.log('usage: node mkdirp.js <path>');
    process.exit(-1);
}

const dirPath = process.argv[2];
mkdirp(dirPath);
```

This JavaScript code uses the built-in `fs` module to create directories. It also uses the `path` module to handle paths.

The `mkdirp` function checks if the directory already exists with `fs.existsSync`. If it does, it returns `true`.

If it doesn't exist, it first checks if its parent directory exists and recursively calls itself with the parent directory path if it doesn't. Then it creates the directory using `fs.mkdirSync` with the `{ recursive: true }` option which is not available in all versions of Node.js, it will create all necessary parent directories.

In your main script, you check if the user provided a command line argument and call the `mkdirp` function with this argument. If not, it outputs a usage message and exits with an error code of `-1`.
