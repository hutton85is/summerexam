#ifndef IDKEY_H
#define IDKEY_H


class IdKey
{
    public:
        IdKey();
        IdKey(int id);
        virtual ~IdKey();

        ///This is here so that you can call the hash() function on your K key
        int hash();

        ///This is here so that you can check if two key values are the same
        bool operator ==(const IdKey &key) const;
        IdKey operator =(const int &id);

    private:
        int id;
};

#endif // IDKEY_H
