
#pragma once

#include <iostream>
#include "Vector.h"

using namespace std;

template<typename K, typename V, template<typename T> class U>
class Map {
private:
    U<K> key;
    U<V> value;

public:
    Map(const int& = 0, const int& = 0);
    ~Map();
    void Show();
};

template<typename K, typename V, template<typename T> class U>
Map<K, V, U>::Map(const int& m, const int& n)
    : key(m), value(n)
{
}

template<typename K, typename V, template<typename T> class U>
Map<K, V, U>::~Map()
{
}

template<typename K, typename V, template<typename T> class U>
void Map<K, V, U>::Show()
{
    cout << this->key << endl;
    cout << this->value << endl;
}
