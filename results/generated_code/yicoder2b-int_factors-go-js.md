This is the JavaScript version of your Golang code:

```js
function printFactors(nr){
    if (nr < 1) {
        console.log("\nFactors of ", nr, "not computed");
        return;
    }
    var fs = [1];
    var apf = function(p, e){
        var n = fs.length;
        for (var i=0; i<e; i++, p*=p) {
            for (var j=0; j<n; j++) {
                fs.push(fs[j]*p);
            }
        } 
    };
    var e = 0;
    while ((nr & 1)==0){
        e++;
        nr >>= 1;
    }
    apf(2, e);
    for (var d = 3; nr > 1; d+=2) {
        if (d*d > nr ){
            d = nr;
        }
        while ((nr %= d) == 0){
            e++;
        }
        if (e > 0){
            apf(d, e);
        }
    }
    console.log("Factors of " + nr);
    console.log(fs.length + " factors computed");
}
printFactors(-1); //not computed
printFactors(0);  //1
printFactors(1);  //1
printFactors(2);  //[1, 2]
printFactors(3);  //[1, 3]
printFactors(53); //[1, 53]
printFactors(45); //[1, 3, 9, 15, 45]
printFactors(64); //[1, 2, 4, 8, 16, 32, 64]
printFactors(600851475143); // [1, 2, 3, 5, 97, 161, 257, 503, 851, 1601, 3203, 6407, 12811, 25621, 51241, 102889, 205771, 411543, 823107, 1646211]
printFactors(999999999999999989); // not computed as the number is too big to factor.
```
