const fs = require("fs");

function createDirectory(path) {
  try {
    if (!fs.existsSync(path)) {
      fs.mkdirSync(path, { recursive: true });
      console.log(`path ${path} successfully created`);
    } else {
      console.log(`${path} already exists`);
    }
  } catch (err) {
    console.error(`Error creating directory ${path}:`, err);
  }
}

createDirectory("./parent/test");
