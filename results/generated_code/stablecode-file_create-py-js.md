The equivalent JavaScript code to perform the same operations would be:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
    // Create output.txt file and write some content just for testing purposes, as actual file size will always remain 0 bytes.
    fs.writeFileSync(
        path.join(directory, "output.txt")), 
         'Test content goes here');

    // Creates an empty directory named 'docs'.
    fs.mkdirSync(path.join(directory, "docs")));
}

create("."); // current directory
create("/"); // root directory
```
This script will create a file named `output.txt` in the given directory, and an empty directory named `docs`. The operations are performed using the built-in `fs` (file system) module of Node.js. This is because JavaScript doesn't natively support low level file operations like in Python.
