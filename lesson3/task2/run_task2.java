import java.util.Scanner;
/*
 * В классе Library реализован итератор
 * В классе Book CompareTo
 * Так же отдельно реализван компаратор BookComparator
 */
public class run_task2 {

    private static Scanner console = new Scanner(System.in);

    private static void addNew(Library lib) {
        System.out.println("Введите название книги: ");
        String title = console.nextLine();
        System.out.println("Введите автора книги: ");
        String author = console.nextLine();
        System.out.println("Индекс популярности?");
        Integer popIndex = console.nextInt();
        console.nextLine();
        System.out.println("Доступна к выдаче? (yes/no): ");
        String userInp = console.nextLine();
        if (userInp.equals("yes"))
            lib.addBook(new Book(title, author, true, popIndex));
        else
            lib.addBook(new Book(title, author, false, popIndex));

    }

    
    private static void remove(Library lib) {
        System.out.println("Введите название удаляемой книги: ");
        String title = console.nextLine();
        System.out.println("Введите автора удаляемой книги: ");
        String author = console.nextLine();
        System.out.println("Индекс популярности?");
        Integer popIndex = console.nextInt();
        console.nextLine();
        System.out.println("Доступна ли к выдаче удаляемая книга? (да/нет): ");
        String userInp = console.nextLine();
        if (userInp.equals("yes"))
            lib.removeBook(new Book(title, author, true, popIndex));
        else
            lib.removeBook(new Book(title, author, false, popIndex));
    }

    private static void findByAuthor(Library lib) {
        System.out.println("Введите автора книги: ");
        String author = console.nextLine();
        lib.searchByAuthor(author);
    }

    private static void Welcome(Library lib) {
        while (true) {
            System.out.println("Добро пожаловать в нашу библиотеку, выберете действие: ");
            System.out.println("1) Добавить книгу; ");
            System.out.println("2) Удалить книгу; ");
            System.out.println("3) Показать каталог; ");
            System.out.println("4) Найти книгу по автору; ");
            System.out.println("5) Перечислить все книги, включая не доступные; ");
            System.out.println("Или любой символ для выхода;");
            String anw = console.nextLine();
            if (anw.equals("1"))
                addNew(lib);
            else if (anw.equals("2"))
                remove(lib);
            else if (anw.equals("3"))
                lib.displayAvailableBook(); // Используется итератор класса
            else if (anw.equals("4"))
                findByAuthor(lib);
            else if (anw.equals("5"))
                lib.displayAllBook(); // Используется итератор класса
            else {
                System.out.println("До свидания!");
                break;
            }
        }

    }
    public static void main(String[] args) {
        Library lib = new Library();
        lib.addBook(new Book("3 mushketera", "A. Duma", true, 5));
        lib.addBook(new Book("10 years later", "A. Duma", true, 2));
        lib.addBook(new Book("Must polpular book", "I Am", false, 100));
        Welcome(lib);
    }
}
