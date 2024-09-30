import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        try (Scanner inputUser = new Scanner(System.in)) {
            System.out.println("+---------Menu---------+");
            System.out.println("1. Biodata");
            System.out.println("2. Lingkaran");
            System.out.println("3. Ganjil Genap");
            System.out.println("4. Exit");
            System.out.println("------------------------");
            System.out.print("Input Pilihan Menu : ");
            int inputPilihan = inputUser.nextInt();

            switch (inputPilihan) {
                case 1 -> Biodata.main(null);
                case 2 -> Lingkaran.main(null);
                case 3 -> GanjilGenap.main(null);
                case 4 -> {
                    System.out.println("Program Telah Berhenti :)");
                    System.exit(0);
                }
                default -> {
                    System.out.println("Pilihan tidak Tersedia :(");
                    System.exit(0);
                }
            }
        }
    }
}
