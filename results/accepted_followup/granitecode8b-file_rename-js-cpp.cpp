const fs = require('fs');
const path = require('path');
// rename file in current directory
fs.renameSync(path.join(__dirname, 'input.txt'),
              path.join(__dirname, 'output.txt'));
// rename file in filesystem root
fs.renameSync('/input.txt', '/output.txt');
// rename directory in current directory
fs.renameSync(path.join(__dirname, 'docs'), path.join(__dirname, 'mydocs'));
// rename directory in filesystem root
fs.renameSync('/docs', '/mydocs');