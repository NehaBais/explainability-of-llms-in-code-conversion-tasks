const fs = require('fs');

try {
    // Rename file in the current working directory.
    fs.renameSync('input.txt', 'output.txt'));

    // Rename a directory in the same directory.
    fs.renameSync('docs', 'mydocs'));

    // Rename a file in the root filesystem directory.
    fs.renameSync('/input.txt', '/output.txt');
    
    // Rename a directory in the root filesystem directory.
    const originalPath = require('path').join(require('os').homedir()), 'docs';
    const newPath = require('path').join(require('os').homedir()), 'mydocs';

    if (fs.existsSync(originalPath)) {
        fs.renameSync(originalPath, newPath));
    } else {
        throw new Error(`Directory ${originalPath} does not exist.`);
    }
} catch (error) {
    console.error('An error occurred:', error);
}