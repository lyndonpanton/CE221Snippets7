#ifndef _PAIR_H_
#define _PAIR_H_

template <class S, class T>
class Pair
{
    private:
        S s;
        T t;
    public:
        Pair(S a, T b): s(a), t(b) {};
        S getFirst() const { return s; };
        T getSecond() const { return t; };
};

#endif