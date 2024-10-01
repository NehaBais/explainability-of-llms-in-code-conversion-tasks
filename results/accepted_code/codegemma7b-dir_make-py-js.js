function mkdirp(path) {
  const fs = require("fs");
  const dir = path.split("/").reduce((acc, segment) => {
    acc = `${acc}/${segment}`;
    if (!fs.existsSync(acc)) {
      fs.mkdirSync(acc, { recursive: true });
    }
    return acc;
  }, "");
  return dir;
}
mkdirp("./path/to/dir");
