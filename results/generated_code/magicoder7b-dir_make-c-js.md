 In JavaScript, you can use the `fs` module from Node.js to achieve this functionality. Here's a function that does this:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dir) {
  try {
    fs.statSync(dir);
  } catch (e) {
    if (e.code === 'ENOENT') {
      // make parent directories first if they don't exist
      var parentDir = path.dirname(dir);
      if (parentDir !== dir) mkdirp(parentDir);
      
      fs.mkdirSync(dir, 0o755);
    } else {
      throw e;
    }
  }
}

const dirToCreate = './path/to/dir';
mkdirp(dirToCreate);
```

This function does not check whether the created directory is actually a directory, it will just try creating all given paths. If one of them already exists as a file, `fs.statSync()` will throw an error with code 'EEXIST'. You might want to add some more checks for this case if needed.
  
Please note that Node.js version 8 or higher is required because earlier versions do not support asynchronous mkdir().
