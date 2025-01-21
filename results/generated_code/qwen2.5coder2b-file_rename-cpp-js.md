To convert the given C++ code to JavaScript, you would need to handle file and directory operations differently. In Node.js, which is what this is essentially for, it uses the `fs` module for handling files and directories.

Here's how you could do it:

```javascript
const fs = require('fs');
const path = require('path');

// Define the paths to the input and output files
const inputPath = 'input.txt';
const outputPath = 'output.txt';

// Define the paths to the docs directory and its new name
const docDirectoryPath = 'docs';
const newDocDirectoryName = 'mydocs';

// Function to rename a file or directory
function renameFileOrDirectory(currentPath, newPath) {
    fs.rename(currentPath, newPath, (err) => {
        if (err) {
            console.error(`Error renaming ${currentPath}:`, err);
        } else {
            console.log(`${currentPath} renamed successfully to ${newPath}`);
        }
    });
}

// Rename the current directory
renameFileOrDirectory(inputPath, outputPath);

// Create a new directory with the new name
fs.mkdir(path.join(__dirname, newDocDirectoryName), (err) => {
    if (err) {
        console.error(`Error creating new directory ${newDocDirectoryName}:`, err);
    } else {
        console.log(`${newDocDirectoryName} created successfully`);
    }
});

// Rename the root directory
renameFileOrDirectory(__dirname, path.join(__dirname, 'mydocs'));

// Rename the root directory's contents
fs.readdir(path.join(__dirname, 'mydocs'), (err, files) => {
    if (err) {
        console.error(`Error listing files in mydocs:`, err);
        return;
    }

    files.forEach((file) => {
        const oldFilePath = path.join(__dirname, 'mydocs', file);
        const newFilePath = path.join(__dirname, 'mydocs', file.replace(inputPath.split('/').pop(), outputPath.split('/').pop()));
        fs.rename(oldFilePath, newFilePath, (err) => {
            if (err) {
                console.error(`Error renaming ${oldFilePath}:`, err);
            } else {
                console.log(`${oldFilePath} renamed successfully to ${newFilePath}`);
            }
        });
    });
});
```

This JavaScript script does the following:
1. Defines the paths for input, output, and new directory names.
2. Uses `fs.rename` to rename files and directories at their current positions.
3. Creates a new directory if it doesn't exist.
4. Renames the contents of the "mydocs" directory by replacing the old file extensions with the new ones.

Please note that Node.js does not have built-in functionality for handling filenames and directory names as deeply as C++ does. The `path` module from Node.js is used to handle paths, which might require some adjustments depending on your environment and usage requirements.
