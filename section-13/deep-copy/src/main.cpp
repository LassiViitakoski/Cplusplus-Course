#include <iostream>

using namespace std;

class Deep {
  private:
    int *data;

  public:
    void set_data_value(int d) {
      *data = d;
    }

    int get_data_value() {
      return *data;
    }

    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d) {
  data = new int;
  *data = d;
}


Deep::Deep(const Deep &source): Deep{*source.data} {
  cout << "Copy constructor - deep" << endl;
}

Deep::~Deep() {
  delete data;
  cout << "Desctructor freeing data" << endl;
}

void display_data(Deep deep) {
  cout << deep.get_data_value() << endl;
}

int main() {
  Deep obj1{100};
  display_data(obj1);

  Deep obj2{obj1};
  obj2.set_data_value(1000);

  return 0;
}