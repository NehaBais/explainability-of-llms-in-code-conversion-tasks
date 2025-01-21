const fs 
= require('fs');
const path 
= require('path');


if (fs.existsSync(path.join(__dirname, 'input.txt'))))) {
  console.log("'input.txt' exists in the current directory");
} else {
  console.log("'input.txt' doesn't exist in the current directory");
}

if (fs.existsSync(path.join(process.cwd(), '/docs'))))) {
  console.log("'docs' exists as a directory in the filesystem root");
} else {
  console.log("'docs' doesn't exist as a directory in the filesystem root");
}