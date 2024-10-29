The JavaScript code is almost identical to the Python one, except we use node.js's `fs` (file system) module to create files and directories instead of Python's built-in functions for file handling. The following JavaScript code does essentially the same thing as your provided Python code - creates an empty file "output.txt" in the current working directory and an empty folder "docs":

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
    fs.writeFileSync(path.join(directory, 'output.txt'), '');
    fs.mkdirSync(path.join(directory, 'docs'));
}

create(".");  // current directory
create("/");  // root directory (this may not work as expected on all platforms)
```
Note: JavaScript runs in a client's web browser or node.js server, it doesn’t have an absolute way to know what the root directory is without knowing the specific environment and platform where this code will be running. Passing `"/"` (the root directory in Linux/OSX) works for example but not on windows because Windows does not use a "/" for its file system structure.

