function mkdir(pathStr) {
  const path = require("path");
  try {
    if (!path.existsSync(path)) {
      fs.mkdirSync(path);
    }
    console.log("File successfully created");
  } catch (err) {
    console.error(err);
  }
}
