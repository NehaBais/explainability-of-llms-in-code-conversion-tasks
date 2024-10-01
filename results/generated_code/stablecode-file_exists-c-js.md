Here's the equivalent JavaScript code for your C code. 

This code uses Node.js built-in methods `fs.stat` and callback functions to check whether a file exists and is regular, and if a directory exists.

```javascript
const fs = require('fs');
const path = require('path');

function check_reg(filePath) {
  return new Promise((resolve, reject) => {
    fs.stat(filePath, (err, stats) => {
      if (err) {
        reject(err);
      } else if (stats.isRegularFile()) {
        resolve(true);
      } else {
        resolve(false);
      }
    });
  })
}

function check_dir(dirPath) {
  return new Promise((resolve, reject) => {
    fs.stat(dirPath, (err, stats) => {
      if (err) {
        reject(err);
      } else if (stats.isDirectory()) {
        resolve(true);
      } else {
        resolve(false);
      }
    });
  })
}

async function main() {
  try {
    const cwd = process.cwd();
    const filePathCWD = path.join(cwd, 'input.txt'));
    const dirPathCWD = path.join(cwd, 'docs'));

    console.log(`input.txt is a regular file? ${await check_reg(filePathCWD)}`));
    console.log(`docs is a directory? ${await check_dir(dirPathCWD)}`));

    const filePathRoot = '/input.txt';
    const dirPathRoot = '/docs';

    console.log(`/input.txt is a regular file? ${await check_reg('/' + filePathRoot)}}`));
    console.log(`/docs is a directory? ${await check_dir('/' + dirPathRoot)}}`));

  } catch (err) {
    console.error(err);
  }
}

main();
```

This code verifies if the file `input.txt` and directory `docs` exist in both the current working directory and the root of the filesystem.
