Sure! Here's the equivalent JavaScript code for the given Golang code:
```javascript
const fs = require('fs');
const path = require('path');
// Create a new empty file called "output.txt" of size 0 bytes in the current working directory.
fs.writeFileSync(path.join(__dirname, 'output.txt'), '');
// Create a new empty directory called "docs" in the filesystem root.
fs.mkdirSync(path.join('/', 'docs'));
```
This code uses Node.js and its `fs` module to create files and directories. The `writeFileSync` method creates a new file and writes an empty string to it, while the `mkdirSync` method creates a directory and does not return an error if it already exists. Note that the `__dirname` variable refers to the current working directory, which is useful for creating relative paths to files and directories.

