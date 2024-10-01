The equivalent JavaScript code for the given Python code is as follows:

```javascript
const fs = require('fs');
const path = require('path');

// Rename files and directories
const inputFilePath = 'input.txt';
const outputFilePath = 'output.txt';
const docsDirectoryPath = 'docs';
const myDocsDirectoryPath = 'mydocs';

// Rename input.txt to output.txt
fs.renameSync(inputFilePath, outputFilePath);
console.log(`Renamed ${inputFilePath} to ${outputFilePath}`));

// Rename docs directory to mydocs directory
fs.renameSync(docsDirectoryPath, myDocsDirectoryPath);
console.log(`Renamed ${docsDirectoryPath} to ${myDocsDirectoryPath}`));

// Repeat the above process for the root directory of the filesystem
```javascript
const rootDirectory = '/';
fs.renameSync(rootDirectory + inputFilePath, 
                            rootDirectory + outputFilePath);
console.log(`Renamed ${rootDirectory + inputFilePath} to ${rootDirectory + outputFilePath}`));

fs.renameSync(rootDirectory + docsDirectoryPath, 
                            rootDirectory + myDocsDirectoryPath);
console.log(`Renamed ${rootDirectory + docsDirectoryPath} to ${rootDirectory + myDocsDirectoryPath}`));
```
Note: This JavaScript code assumes that the user has appropriate permissions to rename files and directories in the current working directory and in the filesystem root directory.
