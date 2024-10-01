The equivalent JavaScript code for the provided Golang code is:

Firstly, you need to import the "fs" and "path" packages.

Here's how it could look like:

```javascript
const fs = require('fs');
const path = require('path');
function mkdirAll(p, mode) {
    if (!fs.existsSync(p)){
        let dirs = p.split('/').filter((dir)=> dir !== '');
        let parent = '';
        dirs.forEach(dir => {
            parent += `${dir}/`;
            if (!fs.existsSync(parent)){
                fs.mkdirSync(parent, mode);
            }
        });
    }
}
mkdirAll('/tmp/some/path/to/dir', 0o770);
```
Please note that in Node.js, the equivalent to the "-p" option of the "mkdir -p" command is not provided. Therefore, we need to implement this functionality manually. Also, make sure you run your program with the correct file permissions (read/write for the group and others) so that it can create the directories correctly.
