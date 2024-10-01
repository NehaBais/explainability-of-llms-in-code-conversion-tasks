const fs = require("fs");
const path = require("path");
function mkdirp(dir) {
  const parts = dir.split(path.sep);
  for (let i = 1; i <= parts.length; i++) {
    const part = parts.slice(0, i).join(path.sep);
    if (!fs.existsSync(part)) {
      fs.mkdirSync(part);
    }
  }
}
try {
  mkdirp("./path/to/dir");
} catch (err) {
  console.error("An Error Occurred:", err);
}
