Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(filePath) {
  try {
    fs.writeFileSync(filePath, '');
    console.log(`file ${filePath} created!`);
  } catch(err) {
    console.error(err);
  }
}

function createDir(dirPath) {
  try {
    if (!fs.existsSync(path.dirname(dirPath))) {
      fs.mkdirSync(path.dirname(dirPath));
    }
    fs.mkdirSync(dirPath);
    console.log(`directory ${dirPath} created!`);
  } catch (err) {
    console.error(err);
  }
}

createFile('input.txt');
createFile('/input.txt');
createDir('docs');
createDir('/docs');
```

Please note that the `fs.writeFileSync()` method in Node.js creates a file with the given filename, writing data to it if the file already exists. If the data is not string (or a Buffer), it will be converted to one by encoding as UTF-8 by default.

Also, error handling is done using try/catch blocks which catches exceptions thrown by sync methods if they occur and logs them to the console.

The function `path.dirname(dirPath)` is used here to get the directory name from the full path. This ensures that the parent directories of the target directory are created before creating the target directory itself, similar to the behavior of `os.Mkdir()` in Golang.
