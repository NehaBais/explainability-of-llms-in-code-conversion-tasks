The equivalent JavaScript code using Node.js's built-in 'fs' and 'path' modules would be:

```javascript
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
    console.log(filePath);
    try {
        if (fs.existsSync(filePath)) {
            const stats = fs.statSync(filePath);
            if (stats.isDirectory()) {
                console.log(' is a directory\n');
            } else {
                console.log(` exists with a file size of ${stats.size} bytes.\n`);
            }
        } else {
            console.log(' does not exist\n');
        }
    } catch(err) {
        console.error(err);
    }
}

function main() {
	fileExists('./input.txt');
	fileExists('./zero_length.txt');
	fileExists(path.join(__dirname, 'docs', 'input.txt'));
	fileExists(path.join(__dirname, 'docs', 'zero_length.txt'));

	// Repeat for root
	fs.realpath('/', (err, rootDir) => {
        if(err) throw err;
        fileExists(path.join(rootDir, 'input.txt'));
        fileExists(path.join(rootDir, 'zero_length.txt'));
    });
}

main();
```
This script works in the same way as the C++ version. It checks whether certain files and directories exist, and prints out details about them. The `fs.realpath` function is used to get the absolute path of the root directory.

NOTE: Node.js does not have a direct equivalent of std::filesystem::file_size(). As a workaround, we use fs.statSync() which returns an object containing file information (including size) when given a valid file path.
