The equivalent of Rust's `std::fs::create_dir_all` in JavaScript is `fs.mkdirSync`. We can use this function in a synchronous manner to create a directory and its parent directories if they don't exist.

Here is the JavaScript code for your requirement:

```javascript
const fs = require('fs');
const path = require('path');

function createDir(dirPath) {
  fs.mkdirSync(path.dirname(dirPath), { recursive: true });
}

createDir('./path/to/dir');
```

This script will create a directory and all parent directories if they don't exist. It uses the `fs.mkdirSync` function to create the directory and the `path.dirname` function to get the parent directory of the given path.

Please note that this code will throw an error if the directory already exists or if there is any other problem with creating the directory. If you want to handle these cases differently, you can add conditional checks before calling the `fs.mkdirSync` function.
