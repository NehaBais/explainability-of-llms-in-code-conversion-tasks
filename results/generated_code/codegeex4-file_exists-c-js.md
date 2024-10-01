In JavaScript, you can use the `fs` module to handle file systems operations. Here's how you could replicate your C code:

```javascript
const fs = require('fs');
const path = require('path');

function checkFile(file) {
    try {
        const stats = fs.lstatSync(file);
        return stats.isFile();
    } catch (err) {
        return false;
    }
}

function checkDirectory(dir) {
    try {
        const stats = fs.lstatSync(dir);
        return stats.isDirectory();
    } catch (err) {
        return false;
    }
}

console.log("input.txt is a regular file? " + (checkFile('input.txt') ? 'yes' : 'no'));
console.log("docs is a directory? " + (checkDirectory('docs') ? 'yes' : 'no'));

console.log("/input.txt is a regular file? " + (checkFile(path.join('/', 'input.txt')) ? 'yes' : 'no'));
console.log("/docs is a directory? " + (checkDirectory(path.join('/', 'docs')) ? 'yes' : 'no'));
```

This code will print whether the `input.txt` file and the `docs` directory exist as regular files or directories, respectively. The `/input.txt` and `/docs` are checked for existence in the root of the filesystem.

Please note that this JavaScript code is meant to be run with Node.js. If you want to check these things on a web server, you would use a different approach (like using AJAX requests).
