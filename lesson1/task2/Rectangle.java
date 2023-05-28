public class Rectangle {
    private int width;
    private int height;

    public Rectangle() {
     this(10, 10);
    }

    public Rectangle(int value) {
        this(value, value);
       }

    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    public void setWidht(int value) {
        this.width = value;
    } 

    public int getWidht() {
        return width;
    } 

    public void setHeight(int value) {
        this.height = value;
    } 

    public int getHeight() {
        return height;
    } 

    public int calculateArea() {
        return width * height;
    }

    public int calculatePerimetr() {
        return 2 * (width + height);
    }
}
