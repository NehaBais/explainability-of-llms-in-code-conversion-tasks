const fs = require("fs");
const path = require("path");
function mkdirp(dirPath) {
  const parts = dirPath.split(path.sep);
  let curDir = "";
  for (let part of parts) {
    curDir += part + path.sep;
    if (!fs.existsSync(curDir)) {
      fs.mkdirSync(curDir, 0o770);
    }
  }
}
