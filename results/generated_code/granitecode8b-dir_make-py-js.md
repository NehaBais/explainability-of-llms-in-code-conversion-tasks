Here's the equivalent JavaScript code for creating a directory and any missing parents:
```javascript
const fs = require('fs');
function mkdirp(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
  } catch (err) {
    if (err.code !== 'EEXIST') {
      throw err;
    }
  }
}
```
This code uses the `fs` module from Node.js to create a directory and any missing parents. The `mkdirSync()` method is used to create the directory synchronously, with the `{ recursive: true }` option set to create all intermediate directories if they don't exist. If an error occurs other than an already-existing directory, it will be thrown.

