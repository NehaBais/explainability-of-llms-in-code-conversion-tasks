Below is the JavaScript code that fulfills the same requirement:
```JavaScript
const fs = require('fs');

// Create "output.txt" file and set its size to 0 bytes
fs.openSync('./output.txt', 'w');
fs.truncateSync('./output.txt', 0);

// Create directory "docs" with appropriate rights
if (!fs.existsSync('./docs')) {
  fs.mkdirSync('./docs', { mode: 511 }); // 511 is rwxr-x--- in decimal representation
}
```
This JavaScript code uses the `fs` module to perform file operations like creating files, setting their sizes or directories with appropriate rights. It also checks if a directory exists before trying to create it. This should be done twice - once in the current working directory and once in the filesystem root.
