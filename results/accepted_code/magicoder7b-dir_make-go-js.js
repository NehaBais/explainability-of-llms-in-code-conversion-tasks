const fs = require("fs");
const path = require("path");

function mkdirp(dir) {
  const resolvedDir = path.resolve(dir);
  try {
    fs.accessSync(resolvedDir, fs.constants.R_OK | fs.constants.W_OK);
  } catch (err) {
    if (err.code === "ENOENT") {
      // Parent directory does not exist, recurse to create it and then this dir.
      mkdirp(path.dirname(resolvedDir));
    }
    fs.mkdirSync(resolvedDir, 0o770);
  }
}
