Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

// Rename in current directory
fs.renameSync(path.join(__dirname, 'input.txt'), path.join(__dirname, 'output.txt'));
fs.renameSync(path.join(__dirname, 'docs'), path.join(__dirname, 'mydocs'));

// Rename in root directory (This part cannot be done in JavaScript because Node.js does not support absolute file paths without a starting slash)
```
Please note that the renaming of files in the root directory can't be done directly using Node.js. This is due to the way Node.js handles filesystem operations, and it doesn't allow you to specify an absolute path on your disk without a starting slash.

The `__dirname` variable gives us the path to the current module's directory which will help us with renaming files in the current directory. If you want to rename files across different directories within Node.js, you can use `path.join(__dirname, 'relative/path/to/directory')`.
