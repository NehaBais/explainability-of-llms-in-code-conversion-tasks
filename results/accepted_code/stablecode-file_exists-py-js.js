const fs = require('fs');
const path = require('path');

// Check if 'input.txt' exists in current directory 
if (fs.existsSync(path.join(__dirname, 'input.txt'))))) {
  console.log("'input.txt' exists in the current directory");
} else {
  console.log("'input.txt' doesn't exist in the current directory");
}

// Check if 'docs' exists as a directory in the filesystem root 
if (fs.existsSync(path.join(__dirname, '/docs'))))) {
  console.log("'docs' exists as a directory in the filesystem root");
} else {
  console.log("'docs' doesn't exist as a directory in the filesystem root");
}