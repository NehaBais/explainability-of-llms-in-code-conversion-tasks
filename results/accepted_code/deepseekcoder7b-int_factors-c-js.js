class Factors {
  constructor() {
    this.list = [];
    this.count = 0;
  }

  xferFactors(flist, flix) {
    for (let ix = this.count, ij = 0; ix < this.count + flix; ix++, ij++) {
      this.list[ix] = flist[ij];
    }
    this.count += flix;
  }

  factor(num) {
    let flist = [];
    let flix = 0;
    let dvsr;

    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr !== 0) continue;

      flist[flix++] = dvsr;
      flist[flix++] = num / dvsr;
    }

    if (dvsr * dvsr == num) {
      flist[flix++] = dvsr;
    }
    this.xferFactors(flist, flix);
  }
}

let nums2factor = [2059, 223092870, 3135, 45];
let ftors = new Factors();
let sep;
for (let i = 0; i < nums2factor.length; i++) {
  ftors.factor(nums2factor[i]);
  console.log("factors of " + nums2factor[i] + " are:");

  for (let j = 0, sep = " "; j < ftors.count; j++) {
    console.log(sep + ftors.list[j]);
    sep = ",";
  }
}
