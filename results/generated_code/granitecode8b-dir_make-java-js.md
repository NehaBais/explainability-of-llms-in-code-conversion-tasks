Here's the JavaScript code that creates a directory and any missing parents:
```
const fs = require('fs');
const path = require('path');
function mkdirp(dirPath) {
  try {
    fs.mkdirSync(dirPath, { recursive: true });
    console.log('path successfully created');
  } catch (err) {
    if (err.code !== 'EEXIST') {
      throw err;
    }
  }
}
const dirPath = path.join(__dirname, 'C:/parent/test');
mkdirp(dirPath);
```
This code uses the `fs` module to create a directory and any missing parents. The `path.join` method is used to construct the full path of the directory to be created. The `try-catch` block is used to handle any errors that may occur during the directory creation process. If the error code is not `EEXIST`, it means that something other than a directory already exists at the given path, and the error is rethrown.

