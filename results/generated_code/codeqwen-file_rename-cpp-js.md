In JavaScript, you can use the `fs.renameSync()` method to rename files and directories:

```javascript
const fs = require('fs');

// Rename a file in the current working directory
fs.renameSync('./input.txt', './output.txt');

// Rename a directory in the current working directory
fs.renameSync('./docs', './mydocs');

// Rename a file in the root directory
fs.renameSync('/input.txt', '/output.txt');

// Rename a directory in the root directory
fs.renameSync('/docs', '/mydocs');
```

Please note that, due to security measures in modern operating systems, it is not recommended to rename system directories such as "/" or "/root". It can potentially cause serious harm to your system if you are not careful.
