The equivalent JavaScript code to check if a file named "input.txt" and a directory named "docs" exist in the current working directory and root directory is as follows:

```javascript
// Check for existence of input.txt in the current working directory
const fs = require('fs');
const path = require('path');

let filePath = path.join(process.cwd(), 'docs', 'input.txt');

fs.access(filePath, fs.constants.F_OK | fs.constants.R_OK, (err) => {
  if (!err) {
    console.log('File exists in the current working directory');
  } else {
    console.log('File does not exist in the current working directory');
  }
});

// Check for existence of input.txt in the root directory
filePath = path.join(process.cwd(), '/docs/input.txt');

fs.access(filePath, fs.constants.F_OK | fs.constants.R_OK, (err) => {
  if (!err) {
    console.log('File exists in the root directory');
  } else {
    console.log('File does not exist in the root directory');
  }
});
```

In this JavaScript code, the 'fs' module is used to perform file and directory operations. The `path.join()` function is used to construct the full path of the input.txt file. 

The `fs.access()` method checks whether a user has both read and write access to a specified file. If the file does not exist, an error is returned which can be checked with if(!err) condition.
