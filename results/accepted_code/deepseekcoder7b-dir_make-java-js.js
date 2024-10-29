const fs = require("fs");
const dir = "./path/to/dir";

function mkdirp(dir) {
  if (!fs.existsSync(dir)) {
    fs.mkdirSync(dir, { recursive: true });
  }
}

mkdirp(dir);
