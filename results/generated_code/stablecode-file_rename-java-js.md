Here is the JavaScript equivalent of your Java code:

```javascript
const fs = require('fs');
const path = require('path');

function renameFile(oldname, newname) {
    // File (or directory) with old name
    let filePath = path.resolve(oldname);

    // File (or directory) with new name
    let newFilePath = path.resolve(newname);

    // Rename file (or directory)
    try {
        fs.renameSync(filePath, newFilePath);
        return true;
    } catch (err) {
        console.error(`Could not rename ${oldname} to ${newname}}:`, err);
        return false;
    }
}

function test(type, oldname, newname) {
    let success = renameFile(oldname, newname));
    console.log(`The following ${type}} called ${oldname}` + (success ? " was renamed as " : " could not be renamed into ")) + `${newname}}.`);
}

const rootPath = require('path').resolve('/');

test("file", "input.txt", "output.txt");
test("file", path.join(rootPath, 'docs', 'input.txt')), path.join(rootPath, 'docs', 'output.txt')));
test("directory", "docs", "mydocs");
test("directory", path.join(rootPath, 'docs')), path.join(rootPath, 'mydocs')));
```
In this code, we import the required modules for file and directory manipulation. The `renameFile` function takes in the old name and new name as parameters. It uses the Node.js built-in `fs` module to rename a file or directory. If the renaming is successful, the function returns `true`. Otherwise, it throws an error and logs the details of the error to the console. The `test` function takes in the type of entity (file or directory), the old name, and the new name as parameters. It calls the `renameFile` function with the given parameters and prints out the result of the renaming operation using the `console.log` method.
