```javascript
const fs = require('fs');

function mkdirp(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
    console.log(`Directory created successfully: ${path}`);
  } catch (error) {
    if (error.code === 'EEXIST') {
      console.log(`Directory already exists: ${path}`);
    } else {
      throw error;
    }
  }
}

// Example usage
mkdirp('./path/to/dir');
```

**Explanation:**

* The code imports the `fs` module, which provides file system operations in Node.js.
* The `mkdirp()` function takes a single path string as input.
* It uses `fs.mkdirSync()` with the `recursive: true` option to create the directory and any missing parent directories.
* If the directory is created successfully, a message is logged indicating that it was created.
* If the directory already exists, a message is logged indicating that it already exists.
* Any other errors encountered during directory creation are thrown.

**Cross-Platform Compatibility:**

The code is cross-platform compatible because it uses the `fs.mkdirSync()` method, which is available on all major operating systems.

**Note:**

* The `mkdirp()` function is synchronous, which means it will block the execution of the code until the directory is created.
* The `recursive: true` option is necessary to create all missing parent directories.
* The `EEXIST` error code indicates that the directory already exists.
