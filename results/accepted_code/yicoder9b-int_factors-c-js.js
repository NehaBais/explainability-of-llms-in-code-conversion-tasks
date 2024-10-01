class Factors {
  constructor() {
    this.list = [];
    this.count = 0;
  }

  addFactors(flist) {
    this.list = this.list.concat(flist);
    this.count += flist.length;
  }
}

function factor(num, fctrs) {
  let flist = [];

  for (let dvsr = 1; dvsr * dvsr < num; dvsr++) {
    if (num % dvsr == 0) {
      flist.push(dvsr);
      flist.push(num / dvsr);
    }
  }
  if (dvsr * dvsr == num) flist.push(dvsr);

  fctrs.addFactors(flist);

  return fctrs;
}

let main = function () {
  let nums2factor = [2059, 223092870, 3135, 45];
  let ftors = new Factors();
  let sep;

  for (let i = 0; i < nums2factor.length; i++) {
    ftors = factor(nums2factor[i], ftors);
    console.log(`factors of ${nums2factor[i]} are: `);
    sep = " ";
    for (let j = 0; j < ftors.count; j++) {
      console.log(`${sep} ${ftors.list[j]}`);
      sep = ",";
    }
  }
};
