public class run_task1 {
    public static void main(String[] args) {
        Rectangle rec = new Rectangle();
        System.out.printf("Площадь прямоугольника равна: %d\n", rec.calculateArea());
        System.out.printf("Периметр прямоугольника равен: %d\n", rec.calculatePerimetr());

        //Пример использоания функционального интерфейса
        I_Resize<Rectangle> resizeFunc = (a, n) -> { 
            a.setHeight(a.getHeight() * n);
            a.setWidht(a.getWidht() * n);
            return a;
        };
        rec = resizeFunc.Reize(rec, 3);

        System.out.printf("Площадь прямоугольника после изменения равна: %d\n", rec.calculateArea());
        System.out.printf("Периметр прямоугольника после изменения равен: %d\n", rec.calculatePerimetr());

    }

}
