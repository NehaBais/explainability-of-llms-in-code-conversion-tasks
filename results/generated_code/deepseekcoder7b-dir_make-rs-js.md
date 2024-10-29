The equivalent code in JavaScript would be using the built-in Node.js `mkdir` function with a custom callback to check if directory already exists, and recursive option set to true for creating parent directories as well. If an error occurs other than 'EEXIST', it is interpreted as "directory not created" and rethrown:

```javascript
const fs = require('fs');
const mkdirp = (path) => {
    fs.mkdir(path, { recursive: true }, (err) => {
        if (err) {
            // If the error is not because the directory already exists
            if (err.code !== 'EEXIST') {
                throw err;
            }
        }
    });
};
mkdirp('./path/to/dir');
```

Please note that, in NodeJS, `fs` module doesn't support error code `'ENOTDIR'` which can happen when a file exists but is not a directory. 

For cross-platform compatibility: Yes, this will work the same way across platforms including Windows, Linux and macOS because these systems handle directories the same way. The only difference would be with respect to path syntax (forward slash `/` on Unix like systems or backslash `\` for Windows). 

Also it should be noted that if you are trying to make a directory in a different location than where your script is running, you will need the appropriate permissions. If not, an error might occur with 'EACCES' (Permission denied) on Unix/Linux systems or 'ERROR_ACCESS_DENIED' Windows systems.

