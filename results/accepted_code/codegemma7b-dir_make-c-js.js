const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  const dirPathArr = path.normalize(dirPath).split(path.sep);

  let currentPath = "";

  for (const dir of dirPathArr) {
    currentPath = path.join(currentPath, dir);

    if (!fs.existsSync(currentPath)) {
      fs.mkdirSync(currentPath, { recursive: true });
    }
  }
}
mkdirp("./path/to/dir");
