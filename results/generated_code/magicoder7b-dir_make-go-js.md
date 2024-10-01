 You can achieve this in JavaScript using the `fs` (file system) module and its method `mkdir()`. Here's how to do it:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dir) {
    const resolvedDir = path.resolve(dir);
    try {
        fs.accessSync(resolvedDir, fs.constants.R_OK | fs.constants.W_OK);
    } catch (err) {
        if (err.code === 'ENOENT') {
            // Parent directory does not exist, recurse to create it and then this dir.
            mkdirp(path.dirname(resolvedDir));
        }
        fs.mkdirSync(resolvedDir, 0o770);
    }
}
```
Now you can call the function like this: `mkdirp("./path/to/dir")`. Remember to use it in a secure way because the function will throw an exception if there's an error (like insufficient permissions, etc.). Also remember to handle possible errors during the execution of the `fs.mkdirSync()` command.
