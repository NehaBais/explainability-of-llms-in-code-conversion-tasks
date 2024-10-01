const fs = require("fs");
const path = require("path");

function mkdirp(dir) {
  try {
    fs.statSync(dir);
  } catch (e) {
    if (e.code === "ENOENT") {
      // make parent directories first if they don't exist
      var parentDir = path.dirname(dir);
      if (parentDir !== dir) mkdirp(parentDir);

      fs.mkdirSync(dir, 0o755);
    } else {
      throw e;
    }
  }
}

const dirToCreate = "./path/to/dir";
mkdirp(dirToCreate);
