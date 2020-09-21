class A;  // forward declaration of A needed by B
class B
{
    display( A a ); //only specified. Body not declared.
};
class A
{
    friend void B::display( A );
};
void B::display(A a)
{
    //declaration here
}
