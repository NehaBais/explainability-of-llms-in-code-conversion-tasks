In JavaScript, you can use `fs.mkdir` method to create a new directory and its parent directories if they don't exist. Here's how the code would look like:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
  const dirs = dirPath.split(path.sep);
  
  for (let i = 0; i <= dirs.length; i++) {
    let currentPath = dirs.slice(0, i).join(path.sep);

    if (!fs.existsSync(currentPath)) {
      fs.mkdirSync(currentPath, { recursive: true });
    }
  }
}
```

In this JavaScript function, we first split the input `dirPath` into directories using `path.sep` as a separator. Then, for each directory (including empty strings at the beginning which represent the root of the filesystem), we join the parts together to form the current path. If the directory does not exist (`fs.existsSync` returns false), we create it using `fs.mkdirSync` with `{ recursive: true }` option that will also create parent directories if they don't exist.
