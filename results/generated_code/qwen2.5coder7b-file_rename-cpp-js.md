The JavaScript equivalent of the given C++ code can be achieved by using `fs.renameSync()` method from Node.js. Here is how to do it:

```javascript
const fs = require('fs');

// Rename files and directories in the current working directory
fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');

// Rename files and directories in the filesystem root
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```

Please note that Node.js can only rename files and directories within its own process, meaning it can't directly access or modify files on the filesystem root. This is a security feature provided by Node.js to avoid accidental modifications of critical system files.

Also, you need to make sure Node.js has appropriate permissions to read and write in those locations. If these operations are run with insufficient privileges, an error will occur.
