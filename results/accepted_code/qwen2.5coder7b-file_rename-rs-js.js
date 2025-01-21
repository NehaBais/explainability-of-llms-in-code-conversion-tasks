const fs = require("fs");
const path = require("path");

function renameInDirectory(dir) {
  fs.renameSync(path.join(dir, "input.txt"), path.join(dir, "output.txt"));
  fs.renameSync(path.join(dir, "docs"), path.join(dir, "mydocs"));
}

renameInDirectory("./"); // here (in the current working directory)
renameInDirectory("/"); // in the filesystem root
