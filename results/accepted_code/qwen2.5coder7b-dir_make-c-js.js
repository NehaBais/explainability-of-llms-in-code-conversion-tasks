function mkdirp(path) {
  const fs = require("fs");
  const pathParts = path.split("/");

  for (let i = 1; i <= pathParts.length; i++) {
    const partPath = pathParts.slice(0, i).join("/");

    try {
      if (!fs.existsSync(partPath)) {
        fs.mkdirSync(partPath);
      }
    } catch (err) {
      if (err.code !== "EEXIST") throw err;
    }
  }

  return true;
}

// Example usage
mkdirp("./path/to/dir");
