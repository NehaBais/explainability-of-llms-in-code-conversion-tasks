 The JavaScript equivalent of the C code would be:

```javascript
const fs = require('fs');
const path = require('path');

function isFile(filePath) {
    return fs.statSync(filePath).isFile();
}

function isDirectory(dirPath) {
    return fs.statSync(dirPath).isDirectory();
}

console.log(`input.txt is a regular file? ${isFile(path.join(__dirname, 'input.txt')) ? "yes" : "no"}`);
console.log(`docs is a directory? ${isDirectory(path.join(__dirname, 'docs')) ? "yes" : "no"}`);
console.log(`/input.txt is a regular file? ${isFile('/input.txt') ? "yes" : "no"}`);
console.log(`/docs is a directory? ${isDirectory('/docs') ? "yes" : "no"}`);
```

Please note that this JavaScript code requires the `fs` (file system) and `path` modules from NodeJS. If these are not installed, you can add them using npm:

npm install fs path
