class Factors {
  constructor() {
    this.list = [];
    this.count = 0;
  }

  factorize(num) {
    const fctrs = new Factors();
    for (let dvsr = 1; dvsr * dvsr <= num; dvsr++) {
      if (num % dvsr == 0) {
        fctrs.list[fctrs.count] = dvsr;
        fctrs.count++;
      }
    }
    return fctrs;
  }
}
