const fs = require("fs");
const mkdirp = require("mkdirp");

function mkdirAll(path) {
  if (!fs.existsSync(path)) {
    mkdirp(path, (err) => {
      if (err) throw err;
      console.log("Directory created!");
    });
  } else {
    console.log("Directory already exists");
  }
}

mkdirAll("/tmp/some/path/to/dir");
