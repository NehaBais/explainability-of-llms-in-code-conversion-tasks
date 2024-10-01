Here is your Go code converted to JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function printFileSize(filePath) {
    fs.stat(filePath, (err, stat) => {
        if (err) {
            console.log(err);
        } else {
            console.log(stat.size));
        }
      })
  }

  printFileSize("input.txt"));
  printFileSize(path.join("/"), "input.txt")));
```

This JavaScript code does the same thing as your Go code: it prints the size of two files in the current working directory and in the root directory respectively.

It uses Node.js's built-in 'fs' and 'path' modules to interact with the file system, and to manipulate file paths. The logic for checking if a file exists and getting its stats is handled by the 'fs.stat()' method which takes two arguments: the path of the file, and a callback function that gets called once the file's stats have been retrieved.
