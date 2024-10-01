const fs = require("fs");

function mkdir(path) {
  try {
    if (!fs.existsSync(path)) {
      fs.mkdirSync(path);
    }
    console.log(`Directory ${path} created successfully`);
  } catch (error) {
    console.error(`An error occurred while creating the directory: ${error}`);
  }
}
