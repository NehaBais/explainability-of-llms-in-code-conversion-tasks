const fs = require("fs");
const path = require("path");

function mkdirp(targetDir) {
  let sep = require("path").sep;
  let initDir = path.isAbsolute(targetDir) ? sep : "";
  targetDir.split(sep).forEach((folder) => {
    if (folder !== "") {
      initDir += folder + sep;
      if (!fs.existsSync(initDir)) {
        fs.mkdirSync(initDir);
      }
    }
  });
}
