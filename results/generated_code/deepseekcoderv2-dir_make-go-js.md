 Certainly! Below is a JavaScript implementation that mimics the behavior of `os.MkdirAll` from Golang, creating a directory and any missing parent directories:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dir) {
  if (!fs.existsSync(dir)) {
    const dirPath = path.dirname(dir);
    mkdirp(dirPath);
    fs.mkdirSync(dir, { mode: 0o770 });
  }
}

// Example usage:
const dirPath = '/tmp/some/path/to/dir';
mkdirp(dirPath);
```

### Explanation:
1. **Check if the directory exists**: The function first checks if the directory already exists using `fs.existsSync(dir)`. If it doesn't exist, proceed to create it and its parent directories.
2. **Get the path of the parent directory**: Use `path.dirname(dir)` to get the path of the parent directory.
3. **Recursive call**: Call `mkdirp` recursively on the parent directory until you reach a point where the parent directory exists or is the root directory.
4. **Create the directory**: Once all necessary parent directories are created, use `fs.mkdirSync(dir, { mode: 0o770 })` to create the target directory with the specified mode (0o770).

This implementation should work equally well on both Windows and Unix-like systems, as Node.js's file system APIs are designed to be cross-platform.
