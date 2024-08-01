#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_small_room{0};
    int num_large_room{0};
    const int price_small_room{25};
    const int price_large_room{35};
    const double tax_rate{6};
    const int valid_days{30};

    cout << "Enter num of small room" << endl;
    cin >> num_small_room;
    cout << "Enter num of large room" << endl;
    cin >> num_large_room;
    cout << "Total estimate: $" << (double)((num_small_room * price_small_room) + \
    (num_large_room * price_large_room)) * (100 + tax_rate) / 100 << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;

    return 0;
}
