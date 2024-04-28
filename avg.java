import java.util.*;

import java.util.Scanner;

public class avg {
    public static float printAvg(int a,int b,int c){
        float avg;
        avg=(a+b+c)/3;
        System.out.println("average is "+avg);
    }
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter three numbers to find average ");
        int a=sc.nextInt(); 
        int b=sc.nextInt();
        int c=sc.nextInt();           
            
        printAvg(a,b,c);   
    }

