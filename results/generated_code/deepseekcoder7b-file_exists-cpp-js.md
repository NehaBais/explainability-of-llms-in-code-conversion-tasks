The JavaScript equivalent of the provided C++ code using Node's `fs` module would look like this:

```javascript
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
  console.log(filePath);
  fs.stat(filePath, (error, stats) => {
    if (error) {
      if (error.code === 'ENOENT') {
        console.log(" does not exist");
      } else {
        throw error;
      }
    } else {
      if (stats.isDirectory()) {
        console.log(' is a directory');
      } else {
        console.log(` exists with a file size of ${stats.size} bytes.`);
      }
    }
  });
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists("docs/input.txt");
fileExists("docs/zero_length.txt");
```
This JavaScript code will have the same functionality as your provided C++ program. Please note that you can run this script with NodeJS, because `fs` and `path` are NodeJS built-in modules. Also, it assumes that the files "input.txt" and "docs/input.txt" exist in the directory where this script is running. If they do not, an error will be thrown.

