/*******************************
* Branching with switch(command)
*******************************/
import java.util.Scanner;
public class Switching {
    public static void main(String[] args)
    {
        Scanner reader = new Scanner(System.in);
        System.out.print("Enter the command: ");
        String command = reader.nextLine();

        // Branching using switch.
        switch (command)
        {
            case "connect":
                System.out.println("Connecting...");
                break;
            case "disconnect":
                System.out.println("Disconnecting...");
                break;
            case "cancel":
                System.out.println("Canceling...");
                break;
            default:
                System.out.println("This is command is not known.");
        }

        // Branching using if and else
        if (command.equals("connect"))
            System.out.println("Connecting...");

        else if (command.equals("disconnect"))
            System.out.println("Disconnecting...");

        else if (command.equals("cancel"))
            System.out.println("Canceling...");
        else
            System.out.println("This command is not recognized in the system.");
    }
}
