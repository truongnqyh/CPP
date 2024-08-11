#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

class Move {
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_date_value() {return *data;}
    Move(int d);
    Move(const Move &source);
//     Move(Move &&source); 
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl; 
}

// Move::Move(const Move &source) : Move{*source.data} {
//         cout << "Copy constructor - deep copy for: " << *data << endl;
// }

Move::Move(const Move &source){
    data = new int;
    *data = *source.data;
    cout << "Copy constructor - deep copy for: " << *data << endl;
}

Move::~Move(){
    if(data != nullptr){
        cout << "Destructor freeing data for: " << *data << endl;
    }
    else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});
    return 0;
}
