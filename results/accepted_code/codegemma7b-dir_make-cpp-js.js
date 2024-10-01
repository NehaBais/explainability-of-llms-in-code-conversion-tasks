const fs = require("fs");

function mkdirp(path) {
  const dirname = path.split("/").slice(0, -1).join("/");

  if (!fs.existsSync(dirname)) {
    mkdirp(dirname);
  }

  if (!fs.existsSync(path)) {
    fs.mkdirSync(path);
  }
}
mkdirp("./path/to/dir");
