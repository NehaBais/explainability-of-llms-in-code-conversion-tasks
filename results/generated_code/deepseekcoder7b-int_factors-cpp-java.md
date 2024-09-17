Here is the equivalent Java code for your C++ program. Please note that in Java we don't have raw arrays, so I changed them to ArrayList. Also I used System.out.printf instead of std::cout and String.format because it provides better formatting options. And please keep in mind to import necessary packages at the beginning of java file:

```java
import java.util.*;

public class Main { 
    public static void main(String[] args) {
        ArrayList<Integer> sampleNumbers = new ArrayList<>(Arrays.asList(3135, 45, 60, 81));
        
        for (int num : sampleNumbers) {
            List<Integer> factors  = generateFactors(num);
            
            System.out.printf("Factors of %4d are: ", num);
            
            for (int factor : factors){
                System.out.print(factor + " "); 
            }
          
            System.out.println(); 
        }  
    }
    
    public static List<Integer> generateFactors(int n) {
        ArrayList<Integer> factors = new ArrayList<>(Arrays.asList(1, n));
        
        for (int i = 2; i * i <= n; ++i) { 
            if (n % i == 0){
                factors.add(i);
                
                if (i * i != n)
                    factors.add(n / i);
             }  
        }
        
        Collections.sort(factors);
        return factors; 
    }     
}
```

