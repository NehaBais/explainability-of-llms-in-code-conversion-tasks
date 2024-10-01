This is the JavaScript equivalent of your C code. It creates a directory or any missing parent directories. If the path already exists, it'll return successfully.

```javascript
const fs = require('fs');
const path = require('path');

function createDirectory(directory) {
    // Check if the directory exists
    if (!fs.existsSync(directory)){
        // Create a new directory
        try {
            fs.mkdirSync(directory, { recursive: true });
        } catch (error) {
          console.log('Error creating directory', error);
        }
    }
}

const dir = '/path/to/dir'; // You can replace this with the actual path you want
createDirectory(dir);
```
This code assumes that you are using Node.js environment to run it. If your platform is a Windows one, you may need to change `\` into `/` in 'const dir = "/path/to/dir"'. Also, this script does not handle symbolic links; if you want to handle them, you should use native fs functions and use readlink() or stat() to check if the path is a symbolic link before calling mkdir().
