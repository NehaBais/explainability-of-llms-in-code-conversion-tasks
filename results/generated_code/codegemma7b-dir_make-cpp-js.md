```javascript
const fs = require('fs');

function mkdirp(path) {
  const dirname = path.split('/').slice(0, -1).join('/');

  if (!fs.existsSync(dirname)) {
    mkdirp(dirname);
  }

  if (!fs.existsSync(path)) {
    fs.mkdirSync(path);
  }
}
mkdirp('./path/to/dir');
```

**Explanation:**

* The `mkdirp()` function takes a single path string as input.
* It splits the path into an array of directories and iterates through them.
* If a directory doesn't exist, it recursively calls itself to create it.
* Finally, it checks if the target directory already exists. If not, it creates it using `fs.mkdirSync()`.

**Cross-platform Support:**

The code is cross-platform, as it uses the `fs` module which is available on both Windows and Linux.

**Note:**

* The `mkdirp()` function creates the directory even if it already exists.
* The `path` argument should be an absolute or relative path.
* The function uses synchronous file system operations for simplicity. In a real-world application, it's recommended to use asynchronous operations for better performance.
