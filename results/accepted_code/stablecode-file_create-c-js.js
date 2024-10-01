const fs = require('fs');
const path = require('path');

// Create file 'output.txt' and truncate it to size 0 bytes
try {
  const fd = fs.openSync(path.join(__dirname), 'output.txt'), 
          O_WRONLY | O_CREAT | O_TRUNC, 0644);

  fs.closeSync(fd);
} catch (error) {
  console.error('Error creating file:', error);
}

// Create directory 'docs'
try {
  const dirPath = path.join(__dirname), 'docs');
  fs.mkdirSync(dirPath, 0755)); // rights 0755 for rwxr-x---
} catch (error) {
  console.error('Error creating directory:', error);
}