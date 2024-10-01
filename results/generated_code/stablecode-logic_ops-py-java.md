Here is the equivalent Java code for the given Python code. 

Please note that in Java, we use '&&' instead of 'and', '||' instead of 'or', and '!' to represent negation of a boolean expression.

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);  // change the arguments as per your requirement
        }

        static void logic(boolean a, boolean b){
            System.out.println("a and b: " + (a && b)));
            System.out.println("a or b: " + (a || b)));
            System.out.println("not a: " + (!a)));
        }
}
```
This Java code replicates the functionality of your Python logic function. The 'main' method calls this function with certain boolean values that need to be changed as per the user's requirement. 

The 'logic' method takes two boolean arguments - 'a' and 'b'. It prints out the result of 'and', 'or', and 'not' operations on these inputs.
