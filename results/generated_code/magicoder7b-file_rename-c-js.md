 The JavaScript equivalent of the C code would be:

```javascript
const fs = require('fs');
const path = require('path');

// here
fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');

// root
fs.renameSync(path.resolve('/input.txt'), path.resolve('/output.txt'));
fs.renameSync(path.resolve('/docs'), path.resolve('/mydocs'));
```

Please note that: 
- The rename function from the fs module in Node.js is used to rename a file or directory.
- The second argument specifies the new name for the file or directory.
- In JavaScript, you use 'fs' to perform file system operations like renaming.
- In order to use this code, you have to install it and then require it in your project by using 'require()'. 
- Use Sync functions when you know that the operation will complete synchronously.
- For root level filesystem operations (like '/input.txt'), we use `path.resolve('/input.txt')` to get an absolute path for the file or directory, otherwise it might not work as expected on all platforms because paths are relative to the current working directory by default in Node.js.
