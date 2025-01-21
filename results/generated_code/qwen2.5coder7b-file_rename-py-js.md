Sure, here is the equivalent code in JavaScript using Node.js's `fs` module:

```javascript
const fs = require('fs');
const path = require('path');

// Rename files and directories in the current working directory
fs.renameSync(path.join(__dirname, 'input.txt'), path.join(__dirname, 'output.txt'));
fs.renameSync(path.join(__dirname, 'docs'), path.join(__dirname, 'mydocs'));

// Rename files and directories in the filesystem root (assuming it's possible to access it)
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```

### Explanation:
- `__dirname` is a global variable that returns the directory name of the current module.
- `path.join(__dirname, 'filename')` joins the specified parts with platform-specific separator and returns the resulting path.
- `fs.renameSync()` is used to rename files synchronously. You can also use `fs.rename()` for asynchronous renaming if needed.

### Note:
Renaming files and directories in the filesystem root (`/`) might require elevated permissions or special handling depending on your environment (e.g., running as a non-root user or using a sandboxed JavaScript runtime). Ensure that you have the necessary permissions to perform these operations.
