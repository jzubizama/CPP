#ifndef ARRAT_HPP
#define ARRAT_HPP

template <class T>

class Array {
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array(): _arr(new T()), _size(0){}

        Array(unsigned int n){
            _arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
                _arr[i] = T();
            _size = n;
        }

        Array(Array const &src){
            _arr = new T[src.size()];
            for (unsigned int i = 0; i < src.size(); i++)
                _arr[i] = src[i];
            _size = src.size();
        }

        Array &operator=(Array const &rhs){
            if (this != &rhs){
                delete[] _arr;
                _arr = new T[rhs.size()];
                for (unsigned int i = 0; i < rhs.size(); i++)
                    _arr[i] = rhs[i];
                _size = rhs.size();
            }
            return *this;
        }

        ~Array(){
            delete[] _arr;
        }
        
        unsigned int size() const {
            return _size;
        }

        T &operator[](int i){
            if (i >= 0 && i < (int)_size)
                return _arr[i];
            throw indexException();
        }

        class indexException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};

#endif