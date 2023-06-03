import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;


// В этом классе будем реализовать итератор
// А каталог сортируется по убыванию популярности книг с использванием Comparable класса book
public class Library implements Iterable<Book>{

    private ArrayList<Book> Catalog;

    public Library() {
        Catalog = new ArrayList<Book>();
    }

    public void addBook(Book book) {
        Catalog.add(book);
        Catalog.sort(new BookComparator());
    } 

    public void removeBook(Book book) {
        for (Book item : Catalog) {
            if (item.equals(book)) {
                Catalog.remove(item);
                break;
            }
        }
        Catalog.sort(new BookComparator());
    }

    public void displayAvailableBook() {
        for (Book book : this) {
            if (book.getAvailable())
                book.displayInfo();
        }
    }

    public void displayAllBook() {
        for (Book book : Catalog) {
            book.displayInfo();           
        }
    }


    public void searchByAuthor(String author) {
        for (Book book : Catalog) {
            if (book.getAuthor().toLowerCase().equals(author.toLowerCase()))
                book.displayInfo();
        }
    }

    @Override
    public Iterator<Book> iterator() {
       Iterator<Book> bookIter = new Iterator<Book>() {
            private int ind = 0;

            @Override
            public boolean hasNext() {
                return ind < Catalog.size();
            }

            @Override
            public Book next() {
                return Catalog.get(ind++);
            }
       };
       return bookIter;
    }

}  