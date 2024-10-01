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