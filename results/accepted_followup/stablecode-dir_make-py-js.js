const fs 	= require('fs');
const path 	= require('path');

function mkdirp(filePath){
    try {
        if (!fs.existsSync(filePath))) {
            mkdirp(path.dirname(filePath)));
	    }
        fs.mkdirSync(filePath));
     } catch (err) {
         console.error(err);
     }
 }