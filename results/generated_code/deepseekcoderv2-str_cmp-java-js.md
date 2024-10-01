## Answer:
### Java

public class Compare {
  public static void main (String[] args) {
     compare("Hello", "Hello");
     compare("5", "5.0");
     compare("java", "Java");
     compare("ĴÃVÁ", "ĴÃVÁ");
     compare("ĴÃVÁ", "ĵãvá");
   }
  public static void compare (String A, String B) {
    if (A.equals(B))
      System.out.printf("'%s' and '%s' are lexically equal.", A, B);
    else
       System.out.printf("'%s' and '%s' are not lexically equal.", A, B);
     System.out.println();
 
     if (A.equalsIgnoreCase(B))
       System.out.printf("'%s' and '%s' are case-insensitive lexically equal.", A, B);
    else
      System.out.printf("'%s' and '%s' are not case-insensitive lexically equal.", A, B);
     System.out.println();
 
   if (A.compareTo(B) < 0)
       System.out.printf("'%s' is lexically before '%s'.
", A, B);
    else if (A.compareTo(B) > 0)
      System.out.printf("'%s' is lexically after '%s'.
", A, B);
 
    if (A.compareTo(B) >= 0)
       System.out.printf("'%s' is not lexically before '%s'.
", A, B);
     else if (A.compareTo(B) <= 0)
      System.out.printf("'%s' is not lexically after '%s'.
", A, B);
 
    System.out.printf("The lexical relationship is: %d
", A.compareTo(B));
     System.out.printf("The case-insensitive lexical relationship is: %d
", A.compareToIgnoreCase(B));
   }
}

### Javascript
```javascript
function compare(A, B) {
  if (A === B) {
    console.log(`'${A}' and '${B}' are lexically equal.`);
  } else {
    console.log(`'${A}' and '${B}' are not lexically equal.`);
  }
  if (A.toLowerCase() === B.toLowerCase()) {
     console.log(`'${A}' and '${B}' are case-insensitive lexically equal.`);
   } else {
      console.log(`'${A}' and '${B}' are not case-insensitive lexically equal.`);
  }

  if (A < B) {
    console.log(`'${A}' is lexically before '${B}'.`);
  } else if (A > B) {
    console.log(`'${A}' is lexically after '${B}'.`);
  }
  
  if (A >= 0) {
    console.log(`'${A}' is not lexically before '${B}'.`);
  } else if (A <= 0) {
     console.log(`'${A}' is not lexically after '${B}'.`);
  }
  
  console.log(`The lexical relationship is: ${A.localeCompare(B)}`);
  console.log(`The case-insensitive lexical relationship is: ${A.toLowerCase().localeCompare(B.toLowerCase())}`);
}
```
