const fs = require('fs');

let size;
try {
  // Get the size of file in the current working directory.
  size = fs.promises.stat(__filename)).size;

  // Get the size of file in the root directory of this file system, assuming Node.js environment.
  const path = require('path').win32;
  size = fs.promises.stat(path.resolve('/', 'input.txt'))).size;
} catch (err) {
  console.error(err);
}