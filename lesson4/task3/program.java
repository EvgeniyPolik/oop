package lesson4.task3;

public class program {

    private static <T extends Comparable> T getMax(T a, T b) {
        if (a.compareTo(b) >= 0)
            return a;
        return b;
    }
    public static void main(String[] args) {
        System.out.printf("Большее в лексеграфическом смысле из A и B: %s\n", getMax("A", "B"));
        System.out.printf("Большее из чисел 5 и 7: %d\n", getMax(5, 7));
    }
}
