import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a day : ");
        String dayName = scan.next();
        scan.close();
        dayName = dayName.toLowerCase();
        switch (dayName) {
            case "monday":
                System.out.println("its monday");
                break;
            case "tuesday":
                System.out.println("its tuesday");
                break;
            case "wednesday":
                System.out.println("its wednesday");
                break;
            case "thursday":
                System.out.println("its thursday");
                break;
            case "friday":
                System.out.println("its friday");
                break;
            case "saturday":
                System.out.println("its saturday");
                break;
            case "sunday":
                System.out.println("its sunday");
                break;
            default:
                System.out.println("Enter correct day");
                break;
        }
    }
}
