```
var fs = require('fs');

module.exports.mkdirp = function(path, opts, cb) {
  var dirname = require('path').dirname;
  path = typeof path === 'string' ? path : '';
  if (typeof opts === 'function') return mkdirp(path, {}, opts);
  if (!opts) opts = {};
  fs.mkdir(path, parseInt('0755', 8), function (err) {
    if (!err || err && err.code !== 'EEXIST') return cb(err);
    // Attempt to create the parent directory recursively
    mkdirp(dirname(path), opts, function (er2) {
      if (er2) return cb(er2);
      mkdirp(path, opts, cb);
    });
  });
};

module.exports = mkdirp;
```
