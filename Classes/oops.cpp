#include <iostream>
#include <string>


using namespace std;


class hero {

    public:
        string name;
        //setter
    void setrollno(int rno){
        rollno = rno;
    }
    //getter 
    int getrollno(){
        return rollno;
    }

    hero(){
    }

    hero (int rno , string name){
        this -> name = name;
        this -> rollno = rno;
    }


    private:
        int rollno;
        int classno;    
};

int main() {

    hero q1(1,"udit");
    cout << q1.getrollno()<< "\n";
    cout << q1.name << "\n";


    //copy constructor
    hero m1(q1);


    // //STATICALLY
    hero h1;
    h1.name = "udit";
    h1.setrollno(20);
    int ans = h1.getrollno();

    //dynamically
    hero *yo = new hero;
    yo->name = "bhanu bhanu";
    yo->setrollno(30);

    cout << ans << endl;
    cout << yo->getrollno() << endl;
    cout << yo->name << endl;
    cout << h1.name << endl;
    return 0;
}
