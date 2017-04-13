#ifndef KEYPAIR_H
#define KEYPAIR_H


template <class K, class T>
class KeyPair
{
    public:
        KeyPair(){}
        KeyPair(K key, T value) : key(key), value(value){}
        virtual ~KeyPair(){}

        K key;
        T value;
};

#endif // KEYPAIR_H
