#include "FibonacciTree.cpp"
using namespace std;
void test_Arbre(){
    cout<<"this is a simple test of the generic tree I implemented "<<endl;
    auto *arbre=new Arbre<int>(50);
    arbre->add( 10);
    arbre->add( -23);
    arbre->add( 45);
    arbre->add( 90) ;
    arbre->add( 70);
    arbre->add( 60);
    //print out the tree
    cout<< arbre;
    // suppression
    arbre->remove(50);
    arbre->remove(90);
    arbre->remove(70);
    cout<<"\n---------------print out the tree after deleting 50,90 and 70 --------------\n";
    cout<<arbre<<endl;
    cout<<"\n---------------looking for 80 and -23 in the tree --------------\n";
    cout<<(arbre->Search(80)?"80 exist":"80 doesn't exist")<<endl;
    cout<<(arbre->Search(-23)?"-23 exist":"-23 doesn't exist")<<endl;
}
void fast_fibonacci_test()
{
    cout<<"this is a simple test of fibonnacci suite, using a tree to store redundant "
          "\ncalculated fibonacci suites for better performance"<<endl;
    /* the next 2 lines are optional, I added them just to visualize
    the values with precision in case the value calculated is too big */
    cout.precision(0); cout << fixed << endl;
    FibonacciTree F=FibonacciTree();
    long double n=40;
    cout<<"fibonacci of "<<n<<" is : "<<F.fibonacci_of(n)<<endl;
   // here is the tree in which we stored redundant calculated values
   // cout<<F.arbre;
}
long double normal_fibonacci(long double n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return normal_fibonacci(n-2)+ normal_fibonacci(n-1);
}
void normal_fibonacci_function_test()
{
    cout<<"this is a  test of normal fibonnacci suite, just for comparison with mine \n";
    cout.precision(0); cout << fixed << endl;
    long double n=40;
    cout<<"fibonacci of "<<n<<" is : "<<normal_fibonacci(n)<<endl;

}
int main() {
    cout<<"===========================tree test========================\n";
    test_Arbre();
    cout<<"===========================optimal Fibonacci test on value= 40 ========================\n";
    fast_fibonacci_test();
    cout<<"===========================normal Fibonacci test on value= 40 ========================\n";
    normal_fibonacci_function_test();


    return 0;
}
