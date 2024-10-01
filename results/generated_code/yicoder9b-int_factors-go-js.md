Here is the equivalent JavaScript code for your Golang program: 
```javascript
function printFactors(nr) {
  var fs = [1];
  if (nr < 1) {
    console.log(`Factors of ${nr} not computed`);
    return;
  }
  console.log(`Computing factors of ${nr}`);
  const apf = function(p, e){
      let n = fs.length;
      for (let i=0, pp=p; i<e; i++, pp *= p) {
          for (let j=0; j < n; ++j ){ 
            fs = [...fs, fs[j]*pp]; 
         }
     }  
   };
  let e = 0;
  for( ; nr % 1 == 0; e++) {
    nr >>= 1;
 }
 apf(2,e);
 for ( let d = 3; nr > 1; d += 2) {
   if(d*d > nr){
       d = nr;
     }  
   for ( e = 0 ; nr % d == 0; e++ ){
    nr /= d;
      }  
   if (e > 0) apf(d, e);
 }
 console.log(fs);
 console.log(`Number of factors = ${fs.length}`);
}
printFactors(-1);
printFactors(0);
printFactors(1);
printFactors(2);
printFactors(3);
printFactors(53);
printFactors(45);
printFactors(64);
printFactors(600851475143);
printFactors(999999999999999989);
```
