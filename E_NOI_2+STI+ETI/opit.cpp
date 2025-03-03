#include <iostream>
using namespace std;

int main() {
    int k, e; // k: number of croissants, e: number of éclairs
    cin >> k >> e;

    // Check if total sweets can be packed
    if ((k + e) % 3 != 0) {
        cout << "-1" << endl; // If total sweets is not divisible by 3, packing is impossible
        return 0;
    }

    // The maximum possible number of boxes
    int total_boxes = (k + e) / 3;

    // Check if we have enough of each type of sweet to pack
    if (total_boxes > k || total_boxes > e) {
        cout << "-1" << endl; // Not enough sweets of one type to fill boxes
        return 0;
    }

    // Determine the number of each type of box
    int br_boxes_2k = min(k / 2, e); // Boxes with 2 croissants and 1 éclair
    int br_boxes_2e = min(e / 2, k); // Boxes with 1 croissant and 2 éclairs

    // Adjust the counts to satisfy total_boxes
    while (br_boxes_2k + br_boxes_2e < total_boxes) {
        if (br_boxes_2k < k / 2 && (k - 2 * br_boxes_2k) > 0 && (e - br_boxes_2e) > 0) {
            br_boxes_2k++; // Add one more box with 2 croissants and 1 éclair
        } else if (br_boxes_2e < e / 2 && (e - 2 * br_boxes_2e) > 0 && (k - br_boxes_2k) > 0) {
            br_boxes_2e++; // Add one more box with 1 croissant and 2 éclairs
        } else {
            break; // No more boxes can be added
        }
    }

    cout << br_boxes_2k << " " << br_boxes_2e << endl;
    return 0;
}

