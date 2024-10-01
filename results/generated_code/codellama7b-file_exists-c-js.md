
Here's the JavaScript code that should achieve the same behavior as the C code:
```
const { statSync } = require('fs');
const { S_ISREG, S_ISDIR } = require('path');

function checkReg(path) {
  try {
    const stats = statSync(path);
    return S_ISREG(stats.mode);
  } catch (err) {
    return false;
  }
}

function checkDir(path) {
  try {
    const stats = statSync(path);
    return S_ISDIR(stats.mode);
  } catch (err) {
    return false;
  }
}

console.log(`input.txt is a regular file? ${checkReg('input.txt') ? 'yes' : 'no'}`);
console.log(`docs is a directory? ${checkDir('docs') ? 'yes' : 'no'}`);
console.log(`/input.txt is a regular file? ${checkReg('/input.txt') ? 'yes' : 'no'}`);
console.log(`/docs is a directory? ${checkDir('/docs') ? 'yes' : 'no'}`);
```
Note that the `statSync` function in Node.js allows us to synchronously check the file status of a given path, and the `S_ISREG` and `S_ISDIR` constants can be used to determine if a given path is a regular file or directory, respectively.
