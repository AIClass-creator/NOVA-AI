import java.util.Scanner;

public class Exercises {
    public static void main(String[] args)
    {
        Scanner interpreter = new Scanner(System.in);
        String name;
        System.out.print("Enter your name: ");
        name = interpreter.nextLine();
        System.out.println("Your name is " + name + " and it have " + name.length() + " letters");
    }
}