// #include "sets.h"
template <class setType>
void Set<setType>::setSize(int s)
{
    size = s;
}

template <class setType>
bool Set<setType>::setSetIndex(setType val, int index)
{
    for (int i = 0; i < getSize(); i++)
    {
        if (arr[i] == val)
        {
            return 0;
        }
    }
    arr[index] = val;
    return true;
}

template <class setType>
setType Set<setType>::getSetIndex(int index) const
{
    return arr[index];
}

template <class setType>
int Set<setType>::getSize() const
{
    return size;
}

template <class setType>
Set<setType>::Set(int s)
{
    setSize(s);
    arr = new setType[getSize()];
}

template <class setType>
Set<setType>::Set(const Set &other)
{
    setSize(other.getSize());
    arr = new setType[getSize()];

    for (int i = 0; i < getSize(); i++)
    {
        setSetIndex(other.getSetIndex(i), i);
    }
}

template <class setType>
Set<setType>::~Set()
{
    delete[] arr;
}

template <class setType>
void Set<setType>::display() const
{
    cout << "{ ";
    for (int i = 0; i < getSize(); i++)
    {
        cout << getSetIndex(i);

        if (i != getSize() - 1)
        {
            cout << ", ";
        }
        else
            cout << " }" << endl;
    }
}

template <class setType>
bool Set<setType>::contain(setType val) const
{
    for (int i = 0; i < getSize(); i++)
    {
        if (val == getSetIndex(i))
        {
            return true;
        }
    }
    return false;
}

template <class setType>
Set<setType> Set<setType>::Union(const Set<setType> &other) const
{
    int newArrSize = 0; // to count lenght of unioned array for obj that will be return
    setType *arr = new setType[getSize() + other.getSize()];
    for (int i = 0; i < getSize() + other.getSize() ; i++)
    {
        if (i < getSize())
        {
            arr[newArrSize] = getSetIndex(i);
            newArrSize++;
        }
        else
        {
            if (!contain(other.getSetIndex(i - getSize()))){
                arr[newArrSize] = other.getSetIndex(i - getSize());
                newArrSize++;
            }
        }
    }
    
    Set<setType> s(newArrSize);
    for (int i = 0; i < s.getSize(); i++)
    {
        s.setSetIndex(arr[i], i);
    }

    return s;
}

template <class setType>
Set<setType> Set<setType>::intersection(const Set<setType> &other) const
{
    setType *temp = new setType[getSize() + other.getSize()];
    int tempSize = 0;
    for (int i = 0; i < getSize(); i++)
    {
        for (int j = 0; j < other.getSize(); j++)
        {
            if (getSetIndex(i) == other.getSetIndex(j))
            {
                temp[tempSize] = getSetIndex(i);
                tempSize++;
            }
        }
    }
    Set<setType> s(tempSize);
    for (int i = 0; i < s.getSize(); i++)
    {
        s.setSetIndex(temp[i], i);
    }

    delete[] temp;
    return s;
}
