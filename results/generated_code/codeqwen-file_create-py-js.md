The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
    fs.openSync(path.join(directory, "output.txt"), 'w');
    fs.mkdirSync(path.join(directory, "docs"));
}

create(__dirname); // current directory
create('/'); // root directory
```

In this code, we use Node.js's built-in file system (`fs`) and path (`path`) modules to create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This is done twice: once in the current working directory and once in the root directory by passing the corresponding paths as arguments to the `create` function. The `__dirname` variable holds the path of the directory containing the currently executing file.
