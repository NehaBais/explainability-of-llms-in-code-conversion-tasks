Here's the converted code from Golang to JavaScript:
```javascript
const fs = require('fs');
 
function createFile(fn) {
  try {
    const fd = fs.openSync(fn, 'w');
    console.log(`file ${fn} created!`);
    fs.closeSync(fd);
  } catch (err) {
    console.error(err);
  }
}
 
function createDir(dn) {
  try {
    fs.mkdirSync(dn, { recursive: true });
    console.log(`directory ${dn} created!`);
  } catch (err) {
    console.error(err);
  }
}
 
createFile('output.txt');
createFile('/output.txt');
createDir('docs');
createDir('/docs');
``` 
Note: In JavaScript, the `fs` module is used instead of the built-in `os` package in Golang. The syntax for opening a file and creating a directory is slightly different. Also, the `recursive` option is used to create directories recursively in the `createDir` function.

