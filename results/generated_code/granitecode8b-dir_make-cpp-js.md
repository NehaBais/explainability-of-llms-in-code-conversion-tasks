Here's the JavaScript code that implements the same functionality as the C++ code you provided:
```javascript
const fs = require('fs');
function mkdirp(path) {
  if (fs.existsSync(path)) {
    return true;
  } else {
    try {
      fs.mkdirSync(path, { recursive: true });
      return true;
    } catch (err) {
      console.error(`Error creating directory at ${path}: ${err.message}`);
      return false;
    }
  }
}
mkdirp('./path/to/dir');
```
This function uses the `fs` module in Node.js to check if the directory already exists, and if not, create it using the `mkdirSync()` method with the `{ recursive: true }` option. If an error occurs during creation, it is caught and logged to the console, and the function returns `false`.

This will create the directory if it does not already exist, and return `true` if the directory was created successfully. If the directory already exists or an error occurs during creation, the function returns `false`.

