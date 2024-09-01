#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test;

void fill(vector<shared_ptr<Test>> &vec, int num);
auto make();
void display(vector<shared_ptr<Test>> &vec);

class Test {
private:
    int data;
public:
    Test(int data_t = 0) : data{data_t} {
        cout << "\tTest constructor: (" << data << ")" << endl;
    }
    ~Test() {
        cout << "\tTest destructor: (" << data << ")" << endl;
    }
    int get_data() const {return data; }
};

auto make(){
    return make_unique<vector<shared_ptr<Test>>>();
}


int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}

void fill(vector<shared_ptr<Test>> &vec, int num){
    int data;

    for (int i = 1; i <= num; i++){
        cout << "Enter data point [" << i << "] :";
        cin >> data;
        /* shared_ptr<Test> ptr = make_shared<Test>(data); */
        /* vec.push_back(ptr); */
        vec.push_back(make_shared<Test>(data));
    }
}

void display(vector<shared_ptr<Test>> &vec){
    cout << "Displaying vector data" << endl;
    cout << "======================" << endl;
    for(const auto &ptr: vec){
        cout << ptr->get_data() << endl;
    }
}






