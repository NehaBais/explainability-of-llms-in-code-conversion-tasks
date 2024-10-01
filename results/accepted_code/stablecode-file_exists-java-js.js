const fs = require('fs');
const path1 = './docs/input.txt';
const path2 = '/docs/input.txt';

console.log(`Exists in root dir: ${fs.existsSync(path2)}`));
console.log(`Exists in current working directory: ${fs.existsSync(path1)}`));