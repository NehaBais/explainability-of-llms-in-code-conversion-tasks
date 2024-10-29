Below is the equivalent Java code for your Python program:

```Java
public class Main {
    public static void compare(Object a, Object b){
        System.out.println("'" + a + "' is of type " + a.getClass().getName() + " and '" + b + "' is of type " + b.getClass().getName());
        
        if (a instanceof String && b instanceof String) {
            String strA = (String) a;
            String strB = (String) b;
            
            System.out.println("'" + strA + "' is lexically less than '" + strB + "': " + (strA.compareTo(strB) < 0));
            System.out.println("'" + strA + "' is lexically greater than '" + strB + "': " + (strA.compareTo(strB) > 0));
            System.out.println("'" + strA + "' is equal to '" + strB + "': " + (strA.equals(strB)));
            
            // Case sensitive comparison 
            System.out.println("Case Sensitive Comparisons:");
            System.out.println("'" + strA + "' is lexically less than '" + strB + "': " + (strA.compareToIgnoreCase(strB) < 0));
            System.out.println("'" + strA + "' is lexically greater than '" + strB + "': " + (strA.compareToIgnoreCase(strB) > 0));
        } 
    }
    
    public static void main(String[] args){
        compare("YUP", "YUP");
        compare("BALL", "BELL");
        compare("24", "123");
        //compare(24, 123); Uncommenting this will cause compile error
        compare(5.0, 5);
    }
}
```
The Java `compareTo()` method in the String class is used for lexical comparison and it returns an integer value that shows the result of the comparison (negative if string is less than given parameter, zero if equal and positive if greater). The `equals()` method is used to check equality. 
Java treats numeric strings differently from other types, treating them as integers or floating point numbers depending on their content. It will cause a compile error in this case because the parameters being passed are not of type String (uncommenting line no. 18). This could be achieved by using wrapper classes for primitive data types like Integer for int and Double for double.

