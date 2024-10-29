Here is the Java equivalent of your Rust code. In java we cannot have "xor" operation so a custom method was created to achieve similar functionality. 

```java
public class Main {
    
    public static void main(String[] args) {
        booleanOperations(true, true);
        booleanOperations(true, false);
        booleanOperations(false, true);
        booleanOperations(false, false);
    }
  
    private static void booleanOperations(boolean a, boolean b){
        System.out.println(a + " and " + b + " -> " + (a && b));
        System.out.println(a + " or " + b + " -> " + (a || b));
        System.out.println("xor of " + a + " and "+ b + " -> " + xorOp(a,b)); 
        System.out.println("not of " + a  + " -> " + (!a) );     
    }
    
   private static boolean xorOp(boolean a, boolean b){
       return (a || b) && !(a && b);
   }
}
```
This Java code does the same thing as your Rust code. It takes two boolean arguments and performs "and", "or" and "xor" operations on them. Finally it prints out the results of these operations along with the negation of first argument (Java's equivalent to Rust's `!` operator) for each set of inputs.

