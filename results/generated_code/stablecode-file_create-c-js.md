The JavaScript equivalent of the given C code is as follows:

```javascript
const fs = require('fs');
const path = require('path');

// Create file 'output.txt' and truncate it to size 0 bytes
try {
  const fd = fs.openSync(path.join(__dirname), 'output.txt'), 
          O_WRONLY | O_CREAT | O_TRUNC, 0644);

  fs.closeSync(fd);
} catch (error) {
  console.error('Error creating file:', error);
}

// Create directory 'docs'
try {
  const dirPath = path.join(__dirname), 'docs');
  fs.mkdirSync(dirPath, 0755)); // rights 0755 for rwxr-x---
} catch (error) {
  console.error('Error creating directory:', error);
}
```
This code uses Node.js's `fs` and `path` modules to perform the required tasks. It first creates a file named "output.txt" with permissions 0644 for rw-r-----. Then it closes the file descriptor returned by `openSync`. After that, it creates an empty directory named "docs" with permissions 0755 for rwxr-x---.
Note: The above code is written to run in a Node.js environment, not in a browser environment.
