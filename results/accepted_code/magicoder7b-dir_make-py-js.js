const fs = require("fs");
const path = require("path");

function mkdirp(dir) {
  try {
    fs.makedirsSync(dir, { mode: 0o755 });
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}
