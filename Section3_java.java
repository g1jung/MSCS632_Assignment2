public class Main {
    public static void main(String[] args) {
        IntegerWrapper num = new IntegerWrapper(10);
        System.out.println("Original: " + num.value);

        changeValue(num);
        System.out.println("After change: " + num.value);
    }

    static void changeValue(IntegerWrapper n) {
        n.value += 5;
    }
}

class IntegerWrapper {
    int value;
    IntegerWrapper(int v) {
        value = v;
    }
}