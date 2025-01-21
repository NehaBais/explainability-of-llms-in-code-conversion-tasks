const fs = require('fs');
const path = require('path');

try {
  const fd = fs.openSync(
    path.join(__dirname),
    'output.txt'
  ), O_WRONLY | O_CREAT | O_TRUNC, 0644);

  fs.closeSync(fd);
} catch (error) {
  console.error('Error creating file:', error);
}

try {
  const dirPath = path.join(__dirname), 'docs');
  fs.mkdirSync(dirPath, 0755)); 
} catch (error) {
  console.error('Error creating directory:', error);
}