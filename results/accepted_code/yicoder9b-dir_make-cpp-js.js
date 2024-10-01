const fs = require("fs");

function mkdir(path) {
  if (fs.existsSync(path)) return;

  try {
    fs.mkdirSync(path, { recursive: true });
  } catch (error) {
    console.log(`Couldn't create directory: ${path}`);
    throw error;
  }
}
