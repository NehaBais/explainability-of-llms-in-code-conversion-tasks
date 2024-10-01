```javascript
const fs = require('fs').promises; // for async/await

async function createDirectory(path) {
  try {
    await fs.mkdir(path, { recursive: true });
  } catch (err) {
    if (err.code !== 'EEXIST') throw err;
  }
}

// usage example:
createDirectory('./path/to/dir')
  .then(() => console.log('Directory created successfully'))
  .catch(err => console.error('An error occurred:', err));
```

This JavaScript code uses the `fs.promises.mkdir` method to create a directory at the specified path with any missing parent directories. The `{ recursive: true }` option ensures that all necessary parent directories are created.

The code is wrapped in an async function and uses try/catch blocks for error handling, which makes it easier to manage asynchronous operations and catch errors. The `EEXIST` error code specifically handles the case where the directory already exists without throwing an exception.
