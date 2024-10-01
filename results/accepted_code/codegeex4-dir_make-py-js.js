const fs = require("fs");
const path = require("path");

function mkdirp(dir) {
  if (!fs.existsSync(dir)) {
    fs.mkdirSync(path.dirname(dir), { recursive: true });
    fs.mkdirSync(dir);
  }
}
