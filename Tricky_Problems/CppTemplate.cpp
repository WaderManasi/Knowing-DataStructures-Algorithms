//SOlution:

template <class T>
class minElement
{
    T input;
    public:
    minElement(T in)
    {
        input=in;
    }
    void check(T in)
    {
        if(input > in)
        cout<<in<<"\n";
        else
        cout<<input<<"\n";
    }
    // Complete the class.Make a private variable,constructors and method called
    // check() which takes one parameter and prints the output in new line. 
};