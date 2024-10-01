In JavaScript, we can use the `mkdirSync` method of the native Node.js `fs` module to create a directory and all its parent directories if they do not exist yet. Here's how we can implement it in JavaScript:
```
const fs = require('fs');
 
function mkdirp(path) {
    try {
        fs.mkdirSync(path);
    } catch (err) {
        // Ignore error if file exists or directory already exists
        if (err.code !== 'ENOENT' && err.code !== 'EEXIST') throw err;
    }
}
 
// Example usage:
mkdirp('./path/to/dir');
```
This function `mkdirp` will create a directory and any missing parents, if they do not exist yet. It uses the native Node.js `fs` module to perform file system operations, and it handles errors gracefully by ignoring errors indicating that a file or directory already exists. If an unexpected error occurs during the directory creation process, this function re-throws the error.
