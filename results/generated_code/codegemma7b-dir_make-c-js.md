```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
  const dirPathArr = path.normalize(dirPath).split(path.sep);

  let currentPath = '';

  for (const dir of dirPathArr) {
    currentPath = path.join(currentPath, dir);

    if (!fs.existsSync(currentPath)) {
      fs.mkdirSync(currentPath, { recursive: true });
    }
  }
}
mkdirp('./path/to/dir');
```

**Explanation:**

* The function uses the `path` module to normalize the directory path and split it into an array of directories.
* It iterates over the directory array and creates each directory if it doesn't exist.
* The `recursive: true` option ensures that parent directories are also created if needed.

**Cross-platform:**

The code is cross-platform and works on all major operating systems.

**Note:**

* The `mkdirp` function does not handle errors such as permission issues.
* The `recursive: true` option may have performance implications on large directories.
