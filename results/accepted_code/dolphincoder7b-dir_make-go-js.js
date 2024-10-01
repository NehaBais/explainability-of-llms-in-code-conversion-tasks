const fs = require("fs");
function mkdirs(path) {
  if (!fs.existsSync(path)) {
    const parentDir = path.substring(0, path.lastIndexOf("/"));
    mkdirs(parentDir);
    fs.mkdirSync(path);
  }
}
