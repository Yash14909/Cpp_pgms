# include <iostream>

class integer
{
    int m,n;
    public:
    
    integer()
    {
        std::cout<<"I am in default constructor"<<std::endl;
        m=0;
        n=0;
    }
    integer(int x,int y)
    {
        std::cout<<"I am in parameterized constructor"<<std::endl;
        m=x;
        n=y;
    }
    integer(const integer & obj)
    {
        std::cout<<"I am in copy constructor constructor"<<std::endl;
        m= obj.m;
        n= obj.n;
    }
    void display() {
        std::cout << "value of m: " << m << std::endl;
        std::cout << "value of n: " << n << std::endl;
    }
};

    int main()
    {
       integer i1;
       i1.display();

       integer i2(10,20);
       i2.display();

       integer i3=i2;
       i3.display();

       return 0;

    }

