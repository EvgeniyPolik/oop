public class Owner {
    private String name;

    public Owner () {
        this("No name");
    }

    public Owner (String name) {
        this.name = name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

}
