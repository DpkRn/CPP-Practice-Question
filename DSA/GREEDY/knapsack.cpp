#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);
    int curWeight = 0;
    double finalValue = 0.0;
    for (auto& item : items) {
        if (curWeight + item.weight <= W) {
            curWeight += item.weight;
            finalValue += item.value;
        } else {
            int remain = W - curWeight;
            finalValue += item.value * ((double)remain / item.weight);
            break;
        }
    }
    return finalValue;
}

int main() {
    int W = 50;
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    cout << "Maximum value in Knapsack = " << fractionalKnapsack(W, items);
    return 0;
}
