public class Cat {
    private String name;
    private int age;
    private Owner owner;

    public Cat() {
        this("No name", 0);
    }

    public Cat(String name) {
        this(name, 0);
    }

    public Cat(String name, int age) {
        this(name, age, new Owner());
    }

    public Cat(String name, int age, Owner owner) {
        this.name = name;
        this.age = age;
        this.owner = owner;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void greed() {
        System.out.printf("Мяу! меня зовут %s. Мне %d года(лет). Мой владелец: %s", name, age, owner.getName());
    }

    public void setOwner(Owner owner) {
        this.owner = owner;
    }

    public Owner getOwner() {
        return owner;
    }
}