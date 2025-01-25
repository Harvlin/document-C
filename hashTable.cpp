#include<iostream>
#include<vector>
#include<list>
#include<utility>

using namespace std;

const int TABLE_SIZE = 10;

int hashFunction(int key) {
      return key % TABLE_SIZE;
}

void insert(vector<list<pair<int, string>>> &hashTable, int key, const string &value) {
      int hashValue = hashFunction(key);
      auto &cell = hashTable[hashValue];
      for (auto &pair : cell) {
            if (pair.first == key) {
                  pair.second = value;
                  return;
            }
      }
      cell.emplace_back(key, value);
}

string search(const vector<list<pair<int, string>>> &hashTable, int key) {
      int hashValue = hashFunction(key);
      const auto &cell = hashTable[hashValue];
      for (const auto &pair : cell) {
            if (pair.first == key) {
                  return pair.second;
            }
      }
      return "NOT FOUND";
}

void printTable(const vector<list<pair<int, string>>> &hashTable) {
      for (int i = 0; i < TABLE_SIZE; i++) {
            if (!hashTable[i].empty()) {
                  cout << "Hash Table[" << i << "]:";
                  for (const auto &pair : hashTable[i]) {
                        cout << "(Key: "  << pair.first << ", Value: " << pair.second << ")";
                  }
                  cout << endl;
            }
      }
}

int main() {
      vector<list<pair<int, string>>> hashTable(TABLE_SIZE);
      insert(hashTable, 905, "john");
      insert(hashTable, 201, "paul");
      insert(hashTable, 332, "george");

      insert(hashTable, 3, "TestValue3");

      printTable(hashTable);

      cout << "Search key 201: " << search(hashTable, 201);
      cout << "Search key 332: " << search(hashTable, 332);
      
      return 0;
}