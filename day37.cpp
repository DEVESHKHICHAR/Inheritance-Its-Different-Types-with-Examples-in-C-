#include <iostream>
using namespace std;
class employee{
    public:
      int id;
      float salary;
    //   employee(){}
      employee(){
        id=1;
        salary=34000000000.03;
      }
};
class programmer : public employee{
    public:
    int language;
    programmer(){
        language=9;
        cout<<language<<endl;
    }
};
int main() {
    // employee devesh(1);
    programmer devesh;
    cout<<devesh.id<<endl; 
    cout<<devesh.salary<<endl;

    return 0; 
}