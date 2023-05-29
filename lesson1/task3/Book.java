import java.util.HashMap;

public class Book {
    private String title;
    private String author;
    private boolean available;

    
    public Book(String title, String author, Boolean available) {
        this.title = title;
        this.author = author;
        this.available = available;
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

    public void displayInfo() {
        HashMap<Boolean, String> answer = new HashMap<Boolean, String>();
        answer.put(true, "ДА");
        answer.put(false, "НЕТ");
        System.out.printf("Название: %s, Автор: %s, Доступность: %s\n", title, author, answer.get(available));
    }

    @Override
    public boolean equals(Object another) {
        if (another instanceof Book) {
            Book operValue = (Book) another;
            if (this.available == operValue.getAvailable() && this.title.equals(operValue.title) && 
           this.author.equals(operValue.getAuthor()))
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
}
