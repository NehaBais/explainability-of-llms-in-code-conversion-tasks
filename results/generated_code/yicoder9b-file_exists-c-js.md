In JavaScript we can use the `fs` module to check for files and directories. Here is how you could translate your C code into Javascript:

```javascript
const fs = require('fs');

// Check for regular file.
function checkReg(path) {
  return new Promise((resolve, reject) => {
    fs.stat(path, (err, stat) => {
      if (err && err.code !== 'ENOENT') {
        reject(err);
      } else if (err) {
        resolve(false);
      } else {
        resolve(stat.isFile());
      }
    });
  })
}

// Check for directory.
function checkDir(path) {
  return new Promise((resolve, reject) => {
    fs.stat(path, (err, stat) => {
      if (err && err.code !== 'ENOENT') {
        reject(err);
      } else if (err) {
        resolve(false);
      } else {
        resolve(stat.isDirectory());
      }
    });
  })
}

async function main() {
  console.log(`input.txt is a regular file? ${await checkReg('input.txt') ? 'yes' : 'no'}`);
  console.log(`docs is a directory? ${await checkDir('docs') ? 'yes' : 'no'}`);
  console.log(`/input.txt is a regular file? ${await checkReg('/input.txt') ? 'yes' : 'no'}`);
  console.log(`/docs is a directory? ${await checkDir('/docs') ? 'yes' : 'no'}`);
}

main();
```
This JavaScript code does the same thing as your C program: it checks if files and directories exist, and prints to console whether they are regular files or directories. The async/await pattern is used here because `fs.stat()` is a callback-based method that takes in a path and a callback function; we convert this into a Promise so it's easier to work with in an asynchronous context like an `async` function.
