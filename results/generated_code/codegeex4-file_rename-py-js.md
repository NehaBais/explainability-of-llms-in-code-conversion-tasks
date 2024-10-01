```javascript
const fs = require('fs');
const path = require('path');

// Rename files and directories within the current working directory

fs.renameSync("input.txt", "output.txt");
fs.renameSync("docs", "mydocs");

// Rename files and directories within the filesystem root (needs appropriate permissions)

let rootPath = path.sep;
fs.renameSync(rootPath + "input.txt", rootPath + "output.txt");
fs.renameSync(rootPath + "docs", rootPath + "mydocs");
```
