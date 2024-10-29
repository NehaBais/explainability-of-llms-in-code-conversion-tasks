Here is the equivalent Java code for your C program. In this case, we use `StringBuilder` to efficiently append strings because it offers a mutable sequence of characters (like StringBuffer). Also note that in Java, arrays have fixed size so no need to calculate or check their length during run-time as we do in C.

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder str = new StringBuilder("Good Morning");
        String cstr = " to all";
        String cstr2 = " !!!";
        
        // Append the string variable with another string literal in the most idiomatic way.
        str.append(cstr).append(cstr2);   
          
        System.out.println("Contents of the variable after append operation: \n" + str.toString());
      }
}
``` 
In this code, first we initialize a `StringBuilder` object with "Good Morning". Then we have three string literals to be concatenated and stored in cstr, cstr1 and cstr2 respectively. The .append() method is called on str for each of the string literal so that they can be added to it in sequence. Finally, we print out the contents of the variable after append operation by calling `toString` method from our StringBuilder object.

