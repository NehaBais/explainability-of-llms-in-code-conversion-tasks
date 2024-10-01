Here is the equivalent Java code:

```java
public class Main {

    public static void main(String[] args) {
        
        //First String Variable
        String s1 = "hello";

        //Printing concatenated string of variable and literal.
        System.out.println(s1 + " world");

        //Second String Variable
        String s2 = s1 + " world";

        //Printing the value of second string variable
        System.out.println(s2);


        //First String Variable for the join operation
        String s3 = "hello";
        String s4 = ", ";
        String[] arrayOfStrings = {s3, "world", "mom"};

        //Printing the content of variables after joining
        System.out.println(", ".join(arrayOfStrings)));
    }
}
```
Please note that Java does not support the implicit concatenation operator as Python does (i.e., '+' operator). Therefore, you need to use the explicit `+` operator in Java for string concatenation.
