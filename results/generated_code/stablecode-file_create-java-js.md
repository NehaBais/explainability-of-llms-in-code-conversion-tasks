Here is the equivalent JavaScript code for creating a new empty file, and an empty directory in the current working directory as well as in the root directory:

```javascript
const fs = require('fs');
const path = require('path');

function makeEmptyFile(dir){
    try {
        if (!fs.existsSync(dir)) {
            fs.mkdirSync(dir);
        }

        let filePath = path.join(dir, 'output.txt'));
        fs.writeFileSync(filePath, '');

    } catch (error) {
        console.log(`Failed to create file: ${error.message}`));
    }
}

function makeEmptyDir(dir){
    try {
        if (!fs.existsSync(dir))) {
            fs.mkdirSync(dir);
        }

        let dirPath = path.join(dir, 'docs'));
        fs.mkdirSync(dirPath);

    } catch (error) {
        console.log(`Failed to create directory: ${error.message}}`));
    }
}

makeEmptyFile('.');
makeEmptyDir('.');

try{
    const response = require('fs').readFileSync(require('path').join(__dirname, 'output.txt'))), { encoding: 'utf-8' });
    console.log(`File content: ${response}}`));
} catch (error) {
    console.log(`Failed to read file: ${error.message}}`));
}};
```
