 In JavaScript, you can use the File System API to achieve a similar effect:

```javascript
const fs = require("fs");

let size1 = fs.statSync('./input.txt').size;
let size2 = fs.statSync('/input.txt').size;
```

Please note that `fs.statSync()` returns an instance of a stat object, which contains information about the file (or directory) at the given path. The `.size` property gives you the size of this file in bytes. 

Also, take into account that your Node.js application must have appropriate permissions to access files and directories in the filesystem.
