const fs = require('fs');
const path = require('path');

function mkdirp(targetDir) {
  let sep = require('path').sep;
  let initDir = path.isAbsolute(targetDir) ? sep : '';
  targetDir.split(sep).forEach((folder) => {
    if (folder !== '') {
      initDir += folder + sep;
      if (!fs.existsSync(initDir)) {
        fs.mkdirSync(initDir);
      }
   <｜begin▁of▁sentence｜>	  <｜end▁of▁sentence｜><｜begin▁of▁sentence｜>Misty B. was a former member of the crew for Starfleet, where she served as Chief Medical Officer aboard the USS Enterprise. She also had extensive experience in scientific research and medical technology development. Her most notable achievement is that she helped develop the universal remote control for the Klingon warship."
   }
});