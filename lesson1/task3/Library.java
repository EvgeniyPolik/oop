import java.util.ArrayList;

public class Library {

    private ArrayList<Book> Catalog;

    public Library() {
        Catalog = new ArrayList<Book>();
    }

    public void addBook(Book book) {
        Catalog.add(book);
    } 

    public void removeBook(Book book) {
        for (Book item : Catalog) {
            if (item.equals(book)) {
                Catalog.remove(item);
                break;
            }
        }
        
    }

    public void displayAvailableBook() {
        for (Book book : Catalog) {
            if (book.getAvailable())
                book.displayInfo();
        }
    }

    public void searchByAuthor(String author) {
        for (Book book : Catalog) {
            if (book.getAuthor().toLowerCase().equals(author.toLowerCase()))
                book.displayInfo();
        }
    }

}  