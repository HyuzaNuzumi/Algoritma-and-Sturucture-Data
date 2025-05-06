#include <iostream>
#include <vector>
#include <variant>
#include <string>
#include <algorithm>

using namespace std;
// Fungsi Perbandingan

bool compare_mixed(const variant<int, string>& a, const  variant<int, string>& b) {
    if (a.index() < b.index()) {
        return true;
    } else if (a.index() > b.index()) {
        return false;
    } else { // jika tipe datanya sama, bandingkan nilainya
        if (holds_alternative<int>(a)) {
            return get <int>(a) < get <int> (b);
        } else if (holds_alternative <string>(a)) {
            return get<string>(a) < get<string> (b); 
        }
    }
    return false;
}

int main () {
    vector<variant<int, string>> mixed_data = {
        "Harimau", 999, 02, 17, 06, "Hantu_16", "Zya02"  
    };

    sort(mixed_data.begin(), mixed_data.end(), compare_mixed);

    for (const auto& item : mixed_data) {
        if (holds_alternative<int>(item)) {
            cout << get<int>(item) << " ";
        }else if (holds_alternative<string>(item)) {
            cout << get<string>(item) << " ";
        }
    }
}