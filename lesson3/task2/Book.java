import java.lang.invoke.WrongMethodTypeException;
import java.util.HashMap;


// Класс книг реализует сравнение по убыванию популярности книг
public class Book implements Comparable{
    private String title;
    private String author;
    private boolean available;
    private Integer popularityIndex;

    
    public Book(String title, String author, Boolean available, Integer popularityIndex) {
        this.title = title;
        this.author = author;
        this.available = available;
        this.popularityIndex = popularityIndex;
    }

    public void setTitle(String title) {
        this.title = title;
    }


    public String getTitle() {
        return title;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getAuthor() {
        return author;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }

    public boolean getAvailable() {
        return available;
    }

    public void setPopularityIndex(int popularityIndex) {
        this.popularityIndex = popularityIndex;
    }

    public int getPopularityIndex() {
        return popularityIndex;
    }

    public void displayInfo() {
        HashMap<Boolean, String> answer = new HashMap<Boolean, String>();
        answer.put(true, "ДА");
        answer.put(false, "НЕТ");
        System.out.printf("Название: %s, Автор: %s, Доступность: %s, Индекс популярности: %d\n", 
        title, author, answer.get(available), popularityIndex);
    }

    @Override
    public boolean equals(Object another) {
        if (another instanceof Book) {
            Book operValue = (Book) another;
            if (this.available == operValue.getAvailable() && this.title.equals(operValue.title) && 
           this.author.equals(operValue.getAuthor()) && this.popularityIndex == operValue.getPopularityIndex())
                return true;
        }
        return false;
    }

    @Override
    public int hashCode() {
        if (available)
            return title.hashCode() + author.hashCode() + 1;
        else
            return title.hashCode() + author.hashCode() + 0;
    }

    // Сравнение по возрастанию популярности
    @Override
    public int compareTo(Object o) {
        if (o instanceof Book) {
            Book anotherBook = (Book) o;
            return this.popularityIndex.compareTo(anotherBook.getPopularityIndex());
        }
        throw new WrongMethodTypeException("Wrong type");
    }
}
