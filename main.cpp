

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int capacity, n;

    cout << "Enter cache capacity: ";
    cin >> capacity;

    if (capacity <= 0) {
        cout << "Capacity must be positive.\n";
        return 0;
    }

    cout << "Enter number of requests: ";
    cin >> n;

    if (n < 0) {
        cout << "Number of requests cannot be negative.\n";
        return 0;
    }

    vector<int> requests(n);

    cout << "Enter requests: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    vector<int> cache;
    int hits = 0, misses = 0;

    for (int i = 0; i < n; i++) {
        int item = requests[i];
        bool found = false;

        // Check whether item is in cache
        for (int j = 0; j < cache.size(); j++) {
            if (cache[j] == item) {
                found = true;
                break;
            }
        }

        if (found) {
            hits++;
            cout << item << " : HIT\n";
        }
        else {
            misses++;
            cout << item << " : MISS\n";

            // If cache is full, remove oldest item
            if (cache.size() == capacity) {
                cout << "Removed: " << cache[0] << "\n";
                cache.erase(cache.begin());
            }

            // Add new item
            cache.push_back(item);
        }

        // Display current cache
        cout << "Cache: ";
        for (int j = 0; j < cache.size(); j++) {
            cout << cache[j] << " ";
        }
        cout << "\n\n";
    }

    cout << "===== CACHE REPORT =====\n";
    cout << "Hits: " << hits << "\n";
    cout << "Misses: " << misses << "\n";

    if (n > 0) {
        cout << "Hit ratio: " << hits * 100.0 / n << "%\n";
        cout << "Miss ratio: " << misses * 100.0 / n << "%\n";
    }

    return 0;
}


