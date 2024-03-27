class Base{
    public:
        int x;
    protected:
        int y;
    private:
        int z;

};

class PublicDerived: public Base{
    /* 
    x is public
    y is protected
    z is not accesible
    
    */
};

class ProtectedDerived: public Base{
    /* 
    x is protected
    y is protected
    z is not accesible
    
    */
};

class PrivateDerived: public Base{
    /* 
    x is private
    y is private
    z is not accesible
    
    */
};