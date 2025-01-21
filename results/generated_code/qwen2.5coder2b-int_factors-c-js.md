The equivalent code in JavaScript would look like this:

```javascript

function Factor(num) {
    this.list = [];
    this.count = 0;

    this.addFactor = function(factor) {
        if (this.count === this.list.length) {
            this.list.length *= 2;
        }
        this.list[this.count++] = factor;
    };

    this.printFactors = function() {
        var sep = ' ';
        for (var i = 0; i < this.count; i++) {
            console.log(sep + this.list[i]);
            sep = ',';
        }
    };
}

function factor(num) {
    var factors = new Factor();
    var dvsr;
    for (dvsr=1; dvsr*dvsr <= num; dvsr++) {
        if (num % dvsr === 0) {
            factors.addFactor(dvsr);
            factors.addFactor(num / dvsr);
        }
    }

    if (factors.count > 0)
        factors.printFactors();
}

var nums2factor = [ 2059, 223092870, 3135, 45 ];
for(var i=0; i<nums2factor.length; i++) {
    factor(nums2factor[i]);
}
```

This JavaScript code does the same thing as the original C code. It finds the factors of a given number and prints them in a human-readable format.
