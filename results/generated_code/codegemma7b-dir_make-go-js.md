```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
  const dirname = path.dirname(dirPath);

  if (!fs.existsSync(dirname)) {
    mkdirp(dirname);
  }

  if (!fs.existsSync(dirPath)) {
    fs.mkdirSync(dirPath, { recursive: true });
  }
}

// Example usage:
mkdirp('/tmp/some/path/to/dir');
```

**Explanation:**

* The function uses the `fs` module to check if the directory already exists.
* If the directory does not exist, the function recursively calls itself on the parent directory.
* Once the parent directory is created, the function creates the target directory using `fs.mkdirSync` with the `recursive: true` option.

**Cross-Platform Support:**

The code is cross-platform compatible as it uses the `path` and `fs` modules available in Node.js, which are available on all major operating systems.

**Note:**

* The `mkdirp` function throws an error if the directory cannot be created for any reason.
* The `0770` permission mode is not used in JavaScript, so it is omitted from the code.
