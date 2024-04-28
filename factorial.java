import java.util.*;

public class factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int factorial=1;

        System.out.println("enter the number you want to find factorial of ");
        int n=sc.nextInt();
        
        for(int i=n;i>=1;i--){
            factorial=factorial*i;
        }
        System.out.println("factorial is: "+ factorial);
    }
    
}
