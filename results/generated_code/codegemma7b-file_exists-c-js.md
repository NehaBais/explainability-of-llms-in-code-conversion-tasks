```javascript
const fs = require('fs');

function checkReg(path) {
  return fs.statSync(path).isFile();
}

function checkDir(path) {
  return fs.statSync(path).isDirectory();
}

console.log(`input.txt is a regular file? ${checkReg('input.txt')}`);
console.log(`docs is a directory? ${checkDir('docs')}`);
console.log(`/input.txt is a regular file? ${checkReg('/input.txt')}`);
console.log(`/docs is a directory? ${checkDir('/docs')}`);
```
