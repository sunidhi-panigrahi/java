
class student{
    String name;
    int age;
    
    public void printInfo(){
         System.out.println(this.name);
         System.out.println(this.age);
    }
}

public class oops{
    public static void main(String[] args){
        student st1=new student();
        
        st1.name="kabir";
        st1.age=13;

        student st2=new student();

        st2.name="natasha";
        st2.age=17;

        st1.printInfo();
        st2.printInfo();

    }
} 
