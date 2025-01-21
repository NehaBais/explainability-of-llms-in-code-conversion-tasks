const fs = require('fs');
const path = require('path');

function printFileSize(filePath) {
  fs.stat(filePath, (err, stat) => {
    if (err) {
      console.log(err);
    } else {
      console.log(stat.size));
    }
  })
}

printFileSize("input.txt"));
printFileSize(path.join("/"), "input.txt")));