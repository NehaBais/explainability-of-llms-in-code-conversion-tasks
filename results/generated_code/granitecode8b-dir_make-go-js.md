Here's an implementation of the `mkdir -p` functionality in JavaScript:
```javascript
const fs = require('fs');
const path = require('path');
function mkdirp(dirPath) {
  const parts = dirPath.split(path.sep);
  let curDir = '';
  for (let part of parts) {
    curDir += part + path.sep;
    if (!fs.existsSync(curDir)) {
      fs.mkdirSync(curDir, 0o770);
    }
  }
}
```
This function splits the input directory path into its components using `path.sep` as the separator. It then iterates through each component, appending it to a running directory path. If the current directory does not exist, it is created using `fs.mkdirSync()`. This process continues until all components have been processed.
Note that this implementation uses synchronous functions from the Node.js fs module. In practice, you may want to use asynchronous versions of these functions for improved performance and concurrency.

