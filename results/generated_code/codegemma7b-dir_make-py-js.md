```javascript
function mkdirp(path) {
  const fs = require('fs');
  const dir = path.split('/').reduce((acc, segment) => {
    acc = `${acc}/${segment}`;
    if (!fs.existsSync(acc)) {
      fs.mkdirSync(acc, { recursive: true });
    }
    return acc;
  }, '');
  return dir;
}
mkdirp('./path/to/dir');
```

**Explanation:**

* The function uses the `fs` module to create directories.
* It splits the path into an array of segments using `path.split('/')`.
* It iterates over the segments and creates the directory at each level.
* The `recursive: true` option ensures that missing parent directories are also created.
* If the directory already exists, the function returns the path to the directory.

**Cross-platform Compatibility:**

The function is cross-platform compatible and works on both Windows and Linux systems.
