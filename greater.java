import java.util.*;

public class greater {
    public static void greater(int a,int b) {

        if(a>b){
            System.out.println("grater number is"+a);
        }
        else{
            System.out.println("grater number is"+b);
        }
    }
} 
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);

System.out.println("enter 1st number ");
int a=sc.nextint();

System.out.println("enter 2nd number ");
int b=sc.nextint();

greater(a,b);
}