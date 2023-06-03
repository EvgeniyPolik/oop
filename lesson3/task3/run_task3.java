import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class run_task3 {
    public static ArrayList<Object> SortObject(ArrayList<Object> list, Comparator cmp) {
        ArrayList<Object> result = new ArrayList<Object>(list);
        Collections.sort(result, cmp);
        return result;
    }
    public static void main(String[] args) {

        Comparator cmp = (s1, s2) -> {
            String vals1 = (String) s1;
            String vals2 = (String) s2;
            return Integer.compare(vals1.length(), vals2.length());
        };

        ArrayList<Object> testArr = new ArrayList<Object>();
        testArr.add("a");
        testArr.add("asa");
        testArr.add("as");
        testArr.add("assasfs");
        testArr.add("sddd");
        testArr.add("dasdf");
        testArr.add("asssss");

        ArrayList<Object> newArr = SortObject(testArr, cmp);

        System.out.println("Изначальный массив: ");
        for (Object obj : testArr) {
            System.out.println((String) obj);
        }
        System.out.println("Отсортированный массив: ");
        for (Object obj : newArr) {
            System.out.println((String) obj);
        }
    }
    
}