template<typename T>
class Array
{
public:
    Array();
    void GetSize();
    void SetSize(int size, int grow);
    int& operator[](int index);
    void RemoveAll();
    void isEmpty(int new_length);
    void FreeExtra();



private:
    int length;
    int* size;

};

template<typename T>
inline Array<T>::Array()
{
    size = 0;
    length = 0;
}

template<typename T>
inline void Array<T>::GetSize()
{
    return size;
}

template<typename T>
inline void Array<T>::SetSize(int size, int grow)
{
    grow = 1;
    if (length > 0) {
        size = new int[length];
    }
    else
    {
        size = nullptr;
    }

}

template<typename T>
inline int& Array<T>::operator[](int index)
{
    return size[index];
}

template<typename T>
inline void Array<T>::RemoveAll()
{
    delete[] size;
    size = nullptr;
    length = 0;
}

template<typename T>
inline void Array<T>::isEmpty(int new_length)
{
    RemoveAll();
    if (new_length <= 0)
        return; 
    size = new int[new_length];
    length = new_length;
}

template<typename T>
inline void Array<T>::FreeExtra()
{
    delete[] size;
}


