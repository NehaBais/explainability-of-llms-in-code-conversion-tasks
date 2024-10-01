const fs = require("fs");
const path = require("path");
function mkdirAll(p, mode) {
  if (!fs.existsSync(p)) {
    let dirs = p.split("/").filter((dir) => dir !== "");
    let parent = "";
    dirs.forEach((dir) => {
      parent += `${dir}/`;
      if (!fs.existsSync(parent)) {
        fs.mkdirSync(parent, mode);
      }
    });
  }
}
mkdirAll("/tmp/some/path/to/dir", 0o770);
