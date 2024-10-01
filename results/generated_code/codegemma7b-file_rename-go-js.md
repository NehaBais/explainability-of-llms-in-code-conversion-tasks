```javascript
const fs = require('fs');

function renameFiles(cwd, root) {
  // Rename files in the current working directory
  fs.renameSync('input.txt', 'output.txt');
  fs.renameSync('docs', 'mydocs');

  // Rename files in the filesystem root
  fs.renameSync(`${root}/input.txt`, `${root}/output.txt`);
  fs.renameSync(`${root}/docs`, `${root}/mydocs`);
}

// Rename files in the current working directory
renameFiles(process.cwd(), process.cwd());

// Rename files in the filesystem root
renameFiles('/', '/');
```
