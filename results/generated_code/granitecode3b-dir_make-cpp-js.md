Sure, here's the equivalent JavaScript code:
```
const fs = require('fs');
const path = require('path');
function mkdirp(dirname) {
 try {
 fs.mkdirSync(dirname, { recursive: true });
 } catch (err) {
 if (err.code !== 'EEXIST') {
 throw err;
 }
 }
}
if (process.argv.length < 3) {
 console.error('Usage: mkdirp <path>');
 process.exit(1);
}
const dirPath = path.resolve(process.argv[2]);
mkdirp(dirPath);
```
This code uses the Node.js `fs` module to create a directory and any missing parents. The function `mkdirp` takes a directory name as an argument and attempts to create it using `fs.mkdirSync`. If an error occurs other than "file already exists", the function rethrows the error. If the directory already exists, the function returns successfully.

