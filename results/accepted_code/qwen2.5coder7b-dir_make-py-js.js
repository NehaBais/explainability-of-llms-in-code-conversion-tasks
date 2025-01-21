const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  const dirs = dirPath.split(path.sep);

  for (let i = 0; i <= dirs.length; i++) {
    let currentPath = dirs.slice(0, i).join(path.sep);

    if (!fs.existsSync(currentPath)) {
      fs.mkdirSync(currentPath, { recursive: true });
    }
  }
}
