#include <climits>
#include "idkey.h"

IdKey::IdKey()
{
    //ctor
}

IdKey::IdKey(int id)
{
    this->id = id;
}

IdKey::~IdKey()
{
    //dtor
}

int IdKey::hash() {
    return ((INT_MAX - id) > 0) ? (INT_MAX - id) : (id > 0 ? id : -id);
}

bool IdKey::operator ==(const IdKey &key) const {
    return true;
}

IdKey IdKey::operator =(const int &id) {
    this->id = id;
    return *this;
}
