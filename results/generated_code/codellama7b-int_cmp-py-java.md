
Here is the code in Java:
```
import java.util.Scanner;
public class Main{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value of a");
    int a = sc.nextInt();
    System.out.println("Enter value of b");
    int b = sc.nextInt();
    if (a < b){
      System.out.println(a + " is less than " + b);
    }else if (a > b){
      System.out.println(a + " is greater than " + b);
    }else if (a == b){
      System.out.println(a + " is equal to " + b);
    }
  }
}
```
