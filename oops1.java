class Animal{
    public void walk(){
        System.out.println("can walk");
    }
}

class Horse extends Animal{
    public void walk(){
        System.out.println("horse walks on 4 legs");
    }
}

class chicken extends Animal{
    public void walk(){
        System.out.println("chicken walks on 2 legs");
    }
}

public class oops1 {
    public static void main(String[] args){
        Horse horse=new Horse();
        horse.walk();

        chicken chicks=new chicken();
        chicks.walk();

        Animal ani=new Animal();
        ani.walk();
    }
}
