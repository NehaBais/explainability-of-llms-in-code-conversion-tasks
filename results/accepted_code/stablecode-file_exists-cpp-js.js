const fs = require('fs');
const path = require('path');

function fileExists(dir, filename) {
    let filePath = path.join(dir, filename);

    if (fs.existsSync(filePath))) {
        console.log(`${filePath} exists`);
        
        if (fs.statSync(filePath)).isDirectory()) {
            console.log(' is a directory');
        } else {
            const fileSize = fs.statSync(filePath).size;
            console.log(` with a file size of ${fileSize} bytes.`);
        }
    } else {
        console.log(`${filePath} does not exist.`);
    }
}

// Check files in the current working directory
let cwd = process.cwd();
console.log("Current working directory: ", cwd);
fileExists(cwd, "input.txt");
fileExists(cwd, "zero_length.txt");
fileExists(cwd, "docs/input.txt");
fileExists(cwd, "docs/zero_length.txt");


// Check files in the root directory
fileExists("/", "input.txt");
fileExists("/", "zero_length.txt");
fileExists("/", "docs/input.txt");
fileExists("/", "docs/zero_length.txt");