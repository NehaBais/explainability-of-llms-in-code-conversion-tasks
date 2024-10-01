JavaScript doesn't have direct equivalents to the C functions `open`, `close`, `creat` and `mkdir` as they are specific to Unix-like operating systems. Instead, you can use Node.js's file system module (`fs`) to achieve similar results.

Here's a JavaScript version of the provided code:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(dirPath) {
    const filePath = path.join(dirPath, 'output.txt');
    try {
        fs.writeFileSync(filePath, '', { mode: 0o640 });
        console.log(`Created output.txt in ${dirPath}`);
    } catch (err) {
        console.error(err);
    }
}

function createDirectory(dirPath) {
    const dir = path.join(dirPath, 'docs');
    try {
        fs.mkdirSync(dir, { mode: 0o750 });
        console.log(`Created docs in ${dirPath}`);
    } catch (err) {
        console.error(err);
    }
}

const here = process.cwd();
const root = '/';

createFile(here);
createDirectory(here);

if (process.platform !== 'win32') {
    createFile(root);
    createDirectory(root);
}
```

This script will:

1. Create `output.txt` with 0640 permissions in the current working directory (`here`) and the filesystem root.
2. Create a `docs` folder with 0750 permissions in both the current working directory and the filesystem root.

However, creating files or directories in the root directory typically requires administrative privileges, which may not be available to regular users on some systems. This script checks if it's running on a Windows system because the path for the root is different (`C:\` vs `/`) and there are no root-level permissions in Windows.
