Below is the equivalent Java code for the given JavaScript function. This Java function performs "and", "or", and "not" operations as specified in the problem description.

```java
public class LogicOperation {

    public static void main(String[] args) {
        
        logic(true, false);
        }

    static void logic(boolean a, boolean b){
        
        System.out.println("a AND b: " + (a && b)));
        System.out.println("a OR b: " + (a || b))));
        System.out.println("NOT a: " + (!a))));
    }
}
```
This Java code will produce the same output as the JavaScript function does for equivalent inputs. The main difference between the two codes is that the Java version uses appropriate operators and parentheses to ensure the correct order of operations, just like in the JavaScript function.
