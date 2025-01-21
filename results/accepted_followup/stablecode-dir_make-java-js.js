const fs = require('fs');
const path = 'C:/parent/test';

try {
  if (!fs.existsSync(path))) {
    fs.mkdirsSync(path, { recursive: true }));
    console.log("Path successfully created");
  } else {
    console.log("Path already exists");
  }
} catch (err) {
  console.error(err);
}