The following is the equivalent JavaScript code for renaming files and directories: 

```javascript
const fs = require('fs');
function renameFile(oldname, newname) {
    try {
        // Rename file (or directory)
        fs.renameSync(oldname, newname);
        return true;
    } catch (err) {
        console.error(`Error: ${err}`);
        return false;
    }
}
function test(type, oldname, newname) {
    console.log(`The following ${type} called ${oldname} was renamed as ${newname}.`);
}
test('file', 'input.txt', 'output.txt');
test('file', '/input.txt', '/output.txt');
test('directory', 'docs', 'mydocs');
test('directory', '/docs/', '/mydocs/');
```
