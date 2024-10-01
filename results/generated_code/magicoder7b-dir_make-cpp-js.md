 The JavaScript equivalent of the C++ code would be as follows. This program takes a single command line argument (a file or directory path), checks if it exists, and creates any missing directories:

```javascript
const fs = require('fs').promises;

async function mkdir(path) {
    try {
        await fs.access(path);
    } catch (err) {
        // If the error message indicates that the file does not exist, create it.
        if (err.message.includes('ENOENT')) {
            const parentDir = path.substring(0, path.lastIndexOf('/'));
            await fs.mkdir(parentDir);
            await fs.mkdir(path);
        } else throw err;
    }
}

// This will call mkdir with the first command line argument and log any errors or success messages to stdout.
mkdir(process.argv[2])
    .then(() => console.log('directory created successfully'))
    .catch((err) => {
        console.error(`couldn't create directory: ${process.argv[2]}`);
        console.error(err);
    });
```

This JavaScript code makes use of the `fs` module in Node.js, which provides an asynchronous interface for file system operations including creating directories. The function `mkdir()` will try to access a file at the specified path and if it does not exist, it creates the directory and its parent directories until the entire path exists. If any error occurs during this process, such as permission errors or other issues preventing a successful creation of a directory, an error message will be logged to the console.
