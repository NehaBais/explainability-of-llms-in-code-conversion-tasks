const fs = require("fs");
const path = require("path");

function mkdirp(p) {
  const parts = p.split(path.sep);
  for (let i = 1; i <= parts.length; i++) {
    let dir = path.join(...parts.slice(0, i));
    if (!fs.existsSync(dir)) {
      fs.mkdirSync(dir);
    }
  }
}

try {
  mkdirp("C:/parent/test");
  console.log("path successfully created");
} catch (e) {
  console.error(e);
}
