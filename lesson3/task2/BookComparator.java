import java.util.Comparator;

// Реализует сравнение по убыванию популярности 
public class BookComparator implements Comparator<Book>{

    @Override
    public int compare(Book book1, Book book2) {
        return Integer.compare(book2.getPopularityIndex(), book1.getPopularityIndex());
    }
    
}
