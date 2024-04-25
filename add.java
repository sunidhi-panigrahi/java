import java.util.Scanner;

public class add {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter value of 1st number:");
        int a=sc.nextInt();
        System.out.println("Enter value of 2nd number:");
        int b = sc.nextInt();

        System.out.println("SUM="+(a+b));
    }
}
