#include <cmath>
#include "IntVector.h"

using namespace std;

// Constructors

IntVector::IntVector() {

    // Initialize the array at INITIAL_CAPACITY
    capacity = INITIAL_CAPACITY;
    array = new int[capacity];
    count = 0;
}

IntVector::IntVector(int size, int value) {

    if(size < 0) {
        size = 0;
    }

    count = size;
    cout << INITIAL_CAPACITY << " initial capacity" << endl;
    // Start at INITIAL_CAPACITY
    capacity = INITIAL_CAPACITY;
    // While we still need more space, we double the capacity
    // but there is no need to actually allocate the memory
    // until we've decided on the size
    while(capacity < size) {
        capacity *= 2;
    }
    array = new int[capacity];

    // Put the initial value in the array "count" times
    for(int i = 0; i < count; i++) {
        array[i] = value;
    }
}

IntVector::IntVector(const IntVector& vec) : capacity(vec.capacity), count(vec.count) {
    array = new int[capacity];

    for(int i = 0; i < count; i++) {
        array[i] = vec.array[i];
    }
}


IntVector::~IntVector() {

    // Remember to free all the memory
    delete[] array;
}

//Private member functions

///You may want to add private member functions to help with the implementation

// Public member functions

///Inserts new element elem at the end of the vector.
void IntVector::push_back(int elem) {

    /// TODO: Implement!
}

///Inserts new element elem at the location index,
///throws IndexOutOfRangeException()
///if index is outside range
void IntVector::insert(int index, int elem) {
    if(count < index || index < 0){
        throw IndexOutOfRangeException();
    }
    array[index] = elem;
}

int IntVector::at(int index) const {

    // Here index == count is NOT OK
    // because we cannot find a data element there.
    // Obviously anything higher than that
    // or lower than 0 is not good.
    if(index < 0 || index >= count) {
        throw IndexOutOfRangeException();
    }

    // Simply return the value at the location
    return array[index];
}

void IntVector::set_value_at(int index, int elem) {

    // Here index == count is NOT OK
    // because we cannot find a data
    // element to change at that location.
    // Obviously anything higher than that
    // or lower than 0 is not good.
    if(index < 0 || index >= count) {
        throw IndexOutOfRangeException();
    }

    // Simply set the element at the location to the new value
    array[index] = elem;
}

int IntVector::size() const {

    return count;
}

bool IntVector::empty() const {

    // (count == 0) is a boolean expression.
    // We return the result of that expression.
    return count == 0;
}

void IntVector::remove_at(int index) {

    // Here index == count is NOT OK
    // because we cannot find a data
    // element to remove at that location.
    // Obviously anything higher than that
    // or lower than 0 is not good.
    if(index < 0 || index >= count) {
        throw IndexOutOfRangeException();
    }

    // Here we have to start at the location where
    // we remove at and, each iteration, move the element
    // above it (array[i+1] into its place.
    // We have to stop before we actually get to the
    // last element, as we move the last element into
    // the next to last element: array[count-2] = array[count-1]
    for(int i = index; i < count - 1; i++) {
        array[i] = array[i + 1];
    }

    //shrink the vector by one.
    count--;
}

int IntVector::pop_back() {

    if(empty()) {
        throw EmptyException();
    }

    //Shrink the vector by one
    count--;

    // return the last element
    // which then stops being part of the list
    // as the last element is array[count-1]
    return array[count];
}

void IntVector::clear() {

    // All we need to do to clear the list is to
    // update our data so that it claims there
    // are no elements.  No need for any actual
    // removing or deleting.
    count = 0;
}

// Overloaded operators

void IntVector::operator=(const IntVector& vec) {
    if(capacity < vec.capacity) {
        delete [] array;
        array = new int[vec.capacity];
    }

    capacity = vec.capacity;
    count = vec.count;

    for(int i = 0; i != count; i++) {
        array[i] = vec.array[i];
    }
}

int& IntVector::operator[] (int index) {

    // Here index == count is NOT OK
    // because we cannot find a data element
    // at that location.
    // Obviously anything higher than that
    // or lower than 0 is not good.
    if(index < 0 || index >= count) {
        throw IndexOutOfRangeException();
    }

    return array[index];
}

ostream& operator<< (ostream& out, const IntVector& rhs) {
    for(int i = 0; i < rhs.size(); i++) {
		if(i > 0) {
			out << " ";
		}
        out << rhs.at(i);
    }
    return out;
}
